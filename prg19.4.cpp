#include <iostream>

using namespace std;

int add(int a, int b)
{
     int c = a + b;
     return c;
}

int subtract(int a, int b)
{
     int c = a - b;
     return c;
}

int multiply(int a, int b)
{
     int c = a * b;
     return c;
}

void chk_num(int a, int b, int c)
{
     if (a > b && a > c)
     {
          cout << "Greatest number is: " << a << endl;
     }
     else if (b > c && b > a)
     {
          cout << "Greatest number is: " << b << endl;
     }
     else
     {
          cout << "Greatest number is: " << c << endl;
     }
}
int main()
{
     int num1, num2, num3, num4, num5, num6;
     cout << "Enter two numbers:-" << endl;
     cin >> num1 >> num2;
     int sum = add(num1, num2);
     cout << "Enter two numbers again:-" << endl;
     cin >> num3 >> num4;
     int minus = subtract(num3, num4);
     cout << "Enter two numbers again:-" << endl;
     cin >> num5 >> num6;
     int prod = multiply(num5, num6);
     chk_num(sum, minus, prod);
     return 0;
}