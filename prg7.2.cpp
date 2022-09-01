#include <iostream>
using namespace std;
int main()
{
     int a, b, c, d;
     cout << "Enter first number: ";
     cin >> a;
     cout << "Enter second number: ";
     cin >> b;
     cout << "Enter third number: ";
     cin >> c;
     cout << "Enter fourth number: ";
     cin >> d;
     if ((a > b) && (a > c) && (a > d))
     {
          cout << a << " is largest number";
     }
     else if ((b > a) && (b > c) && (b > d))
     {
          cout << b << " is the largest number";
     }
     else if ((c > a) && (c > b) && (c > d))
     {
          cout << c << " is the largest number";
     }
     else
     {
          cout << d << " is the largest number";
     }
     return 0;
}