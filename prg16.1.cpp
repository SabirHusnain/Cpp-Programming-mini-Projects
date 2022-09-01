#include <iostream>

using namespace std;

int main()
{
     int num[10];
     for (int i = 0; i < 10; i++)
     {
          cout<<"Enter a number: ";
          cin>>num[i];
     }
     for (int i = 0; i < 10; i++)
     {
          cout<<"Table of "<<num[i]<<" is:-"<<endl;
          for (int j = 1; j <= 10; j++)
          {
               cout<<num[i]<<"*"<<j<<"="<<num[i]*j<<endl;
          }
     }
     return 0;
}