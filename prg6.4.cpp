#include <iostream>

using namespace std;

int main()
{
     int a, b;
     cout << "Enter first numbers: ";
     cin >> a;
     cout << "Enter second number: ";
     cin >> b;
     if (a < b)
     {
          cout << b << " is greater than " << a << endl;
     }
     else
     {
          cout << a << " is greater than " << b << endl;
     }

     return 0;
}