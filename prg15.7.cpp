#include <iostream>

using namespace std;

int main()
{
     int a[10], count=0;
     for (int i = 0; i <= 9; i++)
     {
          cout<<"Enter a number: ";
          cin>>a[i];
          if(a[i]>=50 && a[i]<=90)
          {
               count++;
          }
     }
     cout<<count<<endl;
     return 0;
}