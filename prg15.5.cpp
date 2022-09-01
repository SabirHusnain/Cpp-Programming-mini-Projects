#include <iostream>

using namespace std;

int main()
{
     int a[10], sum=0;
     for (int i = 0; i <= 9; i++)
     {
          cout<<"Enter a number: ";
          cin>>a[i];
     }
     for (int i = 0; i <= 9; i++)
     {
          cout<<a[i]<<endl;
          sum=sum+a[i];
     }
     cout<<"Sum is: "<<sum<<endl;
     return 0;
}