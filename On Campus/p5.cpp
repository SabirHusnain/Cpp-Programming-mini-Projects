#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a, b;
     char op;
     cout << "Enter two an expression: ";
     cin >> a >> op >> b;
     switch (op)
     {
     case '+':
          cout << a << " + " << b << " = " << a + b << endl;
          break;
     case '-':
          cout << a << " - " << b << " = " << a - b << endl;
          break;
     case '*':
          cout << a << " * " << b << " = " << a * b << endl;
          break;
     case '/':
          cout << a << " / " << b << " = " << a / b << endl;
          break;
     case '%':
          cout << a << " % " << b << " = " << a % b << endl;
          break;
     default:
          cout << "invalid Operator entered" << endl;
     }
     getch();
     return 0;
}