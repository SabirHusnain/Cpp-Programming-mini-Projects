#include <iostream>

using namespace std;

int main()
{
     int a, b;
     char op;
     cout << "Enter an operator: ";
     cin >> op;
     switch (op)
     {
     case '+':
          {
               cout << "Enter two numbers:-"<<endl;
               cin >> a >> b;
               cout << "Answer is: " << a + b;
          }
          break;
     case '-':
          {
               cout << "Enter two numbers:-"<<endl;
               cin >> a >> b;
               cout << "Answer is: " << a - b;
          }
          break;
     case '*':
          {
               cout << "Enter two numbers:-"<<endl;
               cin >> a >> b;
               cout << "Answer is: " << a * b;
          }
          break;
     case '/':
          {
               cout << "Enter two numbers:-"<<endl;
               cin >> a >> b;
               cout << "Answer is: " << a / b;
          }
          break;

     default:
          cout << "No operator was entered";
     }
     return 0;
}
