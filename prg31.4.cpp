#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a, b;
     int *p1, *p2;
     p1=&a;
     p2=&b;
     cout<<"Enter two Numbers:-"<<endl;
     cin>>*p1>>*p2;
     *p1=*p1+*p2;
     *p2=*p1-*p2;
     *p1=*p1-*p2;
     cout<<"First Number: "<<*p1<<endl;
     cout<<"Second Number: "<<*p2;
     getch();
     return 0;
}