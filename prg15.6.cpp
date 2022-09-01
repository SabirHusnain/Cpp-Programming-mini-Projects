#include <iostream>

using namespace std;

int main()
{
     int a[10], sum=0, prod=1;
     for (int i = 0; i <= 9; i++)
     {
          cout<<"Enter a number: ";
          cin>>a[i];
     }
     for (int i = 0; i <= 9; i++)
     {
          sum=sum+a[i];
          if (a[i]!=0)
          {
               prod=prod*a[i];
          }
     }
     cout<<"Sum is: "<<sum<<endl;
     cout<<"Average is: "<<sum/10<<endl;
     cout<<"Product is: "<<prod<<endl;
     return 0;
}