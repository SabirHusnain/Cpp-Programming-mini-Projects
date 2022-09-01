#include <iostream>

using namespace std;

bool isOperand(char c)
{
     return (c >= '0' && c <= '9');
}

int value(char c)
{
     return (c - '0');
}

int evaluate(char *exp)
{
     if (*exp == '\0')
     {
          return -1;
     }
     int res = value(exp[0]);
     for (int i = 1; exp[i]; i += 2)
     {
          char opr = exp[i], opd = exp[i + 1];
          if (!isOperand(opd))
          {
               return -1;
          }
          if (opr == '+')
          {
               res += value(opd);
          }
          else if (opr == '-')
          {
               res -= value(opd);
          }
          else if (opr == '*')
          {
               res *= value(opd);
          }
          else if (opr == '/')
          {
               res /= value(opd);
          }
          else
          {
               return -1;
          }
     }
     return res;
}

int main()
{
     char expr[100];
     cout << "Enter expression: ";
     cin.getline(expr, 100);
     int res = evaluate(expr);
     if (res == -1)
     {
          cout << expr << " is invalid" << endl;
     }
     else
     {
          cout << "Answer is: " << res << endl;
     }
     return 0;
}