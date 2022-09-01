/*
Sabir Husnain
2019 MC 263
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct student
{
     int roll, marks;
     float average;
     char grade;
};

int main()
{
     student s[2];
     for (int i = 0; i < 2; i++)
     {
          cout<<"Enter roll number: ";
          cin>>s[i].roll;
          cout<<"Enter marks number: ";
          cin>>s[i].marks;
          cout<<"Enter average number: ";
          cin>>s[i].average;
          cout<<"Enter grade number: ";
          cin>>s[i].grade;
     }
     cout<<"Displaying Data"<<endl;
     for (int i = 0; i < 2; i++)
     {
          cout<<"Roll number of student "<<i+1<<" is: "<<s[i].roll<<endl;
          cout<<"Marks of student "<<i+1<<" is: "<<s[i].marks<<endl;
          cout<<"Average of student "<<i+1<<" is: "<<s[i].average<<endl;
          cout<<"Grade of student "<<i+1<<" is: "<<s[i].grade<<endl;
     }
     
     getch();
     return 0;
}