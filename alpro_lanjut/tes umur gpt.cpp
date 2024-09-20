#include <iostream>
#include <opencv2/opencv.hpp>
#include <tensorflow/cc/client/client_session.h>
#include <tensorflow/cc/ops/standard_ops.h>
#include <tensorflow/core/framework/tensor.h>

using namespace tensorflow;
using namespace tensorflow::ops;
using namespace cv;

int main(int argc, char** argv) {
  // Load model
  Scope root = Scope::NewRootScope();
  auto saver_def = Restore(root, "model.ckpt", {{"save/RestoreV2/"}});
  ClientSession session(root);
  TF_CHECK_OK(session.Run({}, {}, {"init_all_vars_op"}, nullptr));
  TF_CHECK_OK(session.Run({}, {}, {saver_def}, nullptr));
  
  // Load face detector
  CascadeClassifier face_cascade;
  face_cascade.load("haarcascade_frontalface_alt.xml");
  
  // Load image and detect faces
  Mat image = imread(argv[1]);
  std::vector<Rect> faces;
  face_cascade.detectMultiScale(image, faces);
  
  // Loop through faces and predict age
  for (auto face : faces) {
    Mat face_roi = image(face);
    resize(face_roi, face_roi, Size(224, 224));
    Tensor input_tensor(DT_FLOAT, TensorShape({1, 224, 224, 3}));
    auto input_tensor_mapped = input_tensor.tensor<float, 4>();
    for (int y = 0; y < 224; ++y) {
      for (int x = 0; x < 224; ++x) {
        for (int c = 0; c < 3; ++c) {
          input_tensor_mapped(0
