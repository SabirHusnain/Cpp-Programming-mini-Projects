#include <iostream>

using namespace std;

void func(int &b)
{
     b++;
     cout << "Function variable: " << b << endl;
}

int main()
{
     int a = 10;
     func(a);
     cout << "Main variable: " << a << endl;
     return 0;
}