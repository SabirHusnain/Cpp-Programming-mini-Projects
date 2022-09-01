#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[5], *p, sum=0;
     for (int i = 0; i < 5; i++)
     {
          cout<<"Enter a number: ";
          cin>>arr[i]; //1, 2, 3, 4, 5
     }
     p=arr;
     for (int i = 0; i < 5; i++)
     {
          sum=sum+*p;
          p++;
     }
     cout<<"Sum is: "<<sum<<endl;
     getch();
     return 0;
}