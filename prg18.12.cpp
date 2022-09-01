#include <iostream>

using namespace std;

void calculator (int a, int b, char c)
{
     if (c=='+')
     {
          cout<<a<<"+"<<b<<"="<<a+b;
     }
     else if (c=='-')
     {
          cout<<a<<"-"<<b<<"="<<a-b;
     }
     else if (c=='*')
     {
          cout<<a<<"*"<<b<<"="<<a*b;
     }
     else if (c=='/')
     {
          cout<<a<<"/"<<b<<"="<<a/b;
     }
     
}

int main()
{
     int num1, num2;
     char op;
     cout<<"Enter two numbers:-"<<endl;
     cin>>num1>>num2;
     cout<<"Enter an operator: ";
     cin>>op;
     calculator(num1, num2, op);
     return 0;
}