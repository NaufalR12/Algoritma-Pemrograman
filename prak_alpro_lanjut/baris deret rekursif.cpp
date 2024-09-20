#include <iostream>

using namespace std;

int n = 1;
int s = 0;
int input;

void loop ()
{
    if (n <= input)
    {
        cout << n << endl;
        n++;
        s =+ n;
        loop();
    }
    else
    {
        cout << "jadi :" << s;
    }

}
int main()
{
    cout << "input value : "; cin >> input; 
    loop();
}
