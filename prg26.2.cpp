/*
Sabir Husnain
2019 MC 263
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct birth
{
     int day;
     int month;
     int year;
};

int main()
{
     birth obj;
     cout<<"Enter day: ";
     cin>>obj.day;
     cout<<"Enter month: ";
     cin>>obj.month;
     cout<<"Enter year: ";
     cin>>obj.year;
     cout<<"Date of birth is:-"<<endl<<obj.day<<"-"<<obj.month<<"-"<<obj.year;
     getch();
     return 0;
}