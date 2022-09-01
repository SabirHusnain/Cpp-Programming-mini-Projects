#include <iostream>

using namespace std;

int main()
{
     int a, b;
     cout << "Enter first numbers: ";
     cin >> a;
     cout << "Enter second number: ";
     cin >> b;
     if (a == b)
     {
          cout << a << " is equal to " << b;
     }
     else if (a > b)
     {
          cout << a << " is greater than " << b << endl;
     }
     else
     {
          cout << b << " is greater than " << a << endl;
     }
     return 0;
}