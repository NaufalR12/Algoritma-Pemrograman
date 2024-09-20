#include <iostream>
#include <stdlib.h>
#define data_size 100
using namespace std;

void quick_sort(int array[],int first, int last)
{
	int temp, low, high, list_separator;
	low = first;
	high = last;
	list_separator = array[(first+last) / 2];
	
	do {
		 while(array[low] < list_separator)
			low++;
		 while(array[high] < list_separator)
			high--;
			
		 if (low <= high) {
			temp = array[low];
			array[low++] = array[high];
			array[high--] = temp;
		 }
	} while (low <= high);
	
	if (first < high) quick_sort(array, first, high);
	
