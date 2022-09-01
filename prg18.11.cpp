#include <iostream>

using namespace std;

void add(int a, float b, int c, float d)
{
     float e = a + b + c + d;
     cout <<"Sum is: "<< e << endl;
}

int main()
{
     int num1, num2;
     float num3, num4;
     cout << "Enter two integers numbers:-" << endl;
     cin >> num1 >> num2;
     cout << "Enter two floating point numbers:-" << endl;
     cin >> num3 >> num4;
     add(num1, num3, num2, num4);
     return 0;
}
