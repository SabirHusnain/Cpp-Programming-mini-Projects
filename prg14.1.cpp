#include <iostream>

using namespace std;

int main()
{
     int a, b;
     char op;
     cout << "Enter first number: ";
     cin >> a;
     cout << "Enter second number: ";
     cin >> b;
     cout << "Enter an operator: ";
     cin >> op;
     switch (op)
     {
     case '+':
          cout << "Answer is: " << a + b;
          break;
     case '-':
          cout << "Answer is: " << a - b;
          break;
     case '*':
          cout << "Answer is: " << a * b;
          break;
     case '/':
          cout << "Answer is: " << a / b;
          break;

     default:
          cout << "No operator was entered";
     }
     return 0;
}