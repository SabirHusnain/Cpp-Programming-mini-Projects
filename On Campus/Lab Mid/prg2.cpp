#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num;
     cout<<"Enter a number: ";
     cin>>num;
     while (num>0)
     {
          cout<<num%10<<endl;
          num/=10;
     }
     
     getch();
     return 0;
}