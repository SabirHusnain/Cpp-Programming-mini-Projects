/*
Name: Sabir Husnain
Roll No. 2019 MC 263
Section: A
*/

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

// In this program data will be saved in encrypted form and can not be read be human

struct student
{
     char name[30], regNo[15];
     int age;
     float CGPA;
};

student getData()
{
     student tempObj;
     cout << "Enter name: ";
     cin.getline(tempObj.name, 30);
     cout << "Enter Registration Number: ";
     cin.getline(tempObj.regNo, 15);
     cout << "Enter age: ";
     cin >> tempObj.age;
     cout << "Enter CGPA: ";
     cin >> tempObj.CGPA;
     return tempObj;
}

int main()
{
     student stu;
     stu = getData();
     ofstream out("Student.txt");
     if (!out)
     {
          cout << "File Opening Error" << endl;
          exit(0);
     }
     out.write((char *)&stu, sizeof(stu));
     getch();
     return 0;
}