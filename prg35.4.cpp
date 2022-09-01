/*
Sabir Husnain
2019 MC 263
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct student
{
     char name[20];
     int rNo;
     float marks;
};

void printData(student);

int main()
{
     student s1;
     cout << "Enter Name: ";
     cin.getline(s1.name, 20);
     cout << "Enter Roll Number: ";
     cin >> s1.rNo;
     cout << "Enter Marks: ";
     cin >> s1.marks;
     printData(s1);
     getch();
     return 0;
}

void printData(student a)
{
     cout << "Name: " << a.name << endl;
     cout << "Roll Number: " << a.rNo << endl;
     cout << "Marks: " << a.marks << endl;
}