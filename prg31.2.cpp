#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a[5], sum=0;
     int *p[5];
     for (int i = 0; i < 5; i++)
     {
          p[i]=&a[i];
          cout<<"Enter a number: ";
          cin>>*p[i];
     }
     for (int i = 0; i < 5; i++)
     {
          sum=sum+*p[i];
     }
     cout<<"Sum is: "<<sum<<endl;
     cout<<"Average is: "<<sum/5<<endl;
     getch();
     return 0;
}