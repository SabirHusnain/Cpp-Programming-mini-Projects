#include <iostream>

using namespace std;

int main()
{
     int a, b;
     char op;
     cout << "Enter first number: ";
     cin >> a;
     cout << "Enter the operator: ";
     cin >> op;
     cout << "Enter second number: ";
     cin >> b;
     if (op == '+')
     {
          cout << a << "+" << b << "=" << a + b << endl;
     }
     else if (op == '-')
     {
          cout << a << "-" << b << "=" << a - b << endl;
     }
     else if (op == '*')
     {
          cout << a << "*" << b << "=" << a * b << endl;
     }
     else if (op == '/')
     {
          cout << a << "/" << b << "=" << a + b << endl;
     }
     else if (op == '%')
     {
          cout << a << "%" << b << "=" << a % b << endl;
     }
     else
     {
          cout << "Operator was not entered" << endl;
     }

     return 0;
}