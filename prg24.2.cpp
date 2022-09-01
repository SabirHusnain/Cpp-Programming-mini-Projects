#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int session, attendance, session1, attendance1;
     char name[50], regNo[50], dept[50], subject[50], sect[50], teacher[50];
     char name1[50], regNo1[50], dept1[50], subject1[50], sect1[50], teacher1[50];
     cout << "Enter name of student 1: ";
     cin.getline(name, 50);
     cout << "Enter session of student 1: ";
     cin >> session;
     cin.ignore();
     cout << "Enter registration number of student 1: ";
     cin.getline(regNo, 50);
     cout << "Enter department of student 1: ";
     cin.getline(dept, 50);
     cout << "Enter section of student 1: ";
     cin.getline(sect, 50);
     cout << "Enter subject of student 1: ";
     cin.getline(subject, 50);
     cout << "Enter name of teacher of student 1: ";
     cin.getline(teacher, 50);
     cout << "Enter attendance of student 1: ";
     cin >> attendance;
     cin.ignore();
     cout << "Enter name of student 2: ";
     cin.getline(name, 50);
     cout << "Enter session of student 2: ";
     cin >> session;
     cin.ignore();
     cout << "Enter registration number of student 2: ";
     cin.getline(regNo, 50);
     cout << "Enter department of student 2: ";
     cin.getline(dept, 50);
     cout << "Enter section of student 2: ";
     cin.getline(sect, 50);
     cout << "Enter subject of student 2: ";
     cin.getline(subject, 50);
     cout << "Enter name of teacher of student 2: ";
     cin.getline(teacher, 50);
     cout << "Enter attendance of student 2: ";
     cin >> attendance;
     cout << "Showing Results 1...." << endl;
     cout << "Name of student 1 is: " << name << endl;
     cout << "Session of student 1 is: " << session << endl;
     cout << "Registration Number of student 1 is: " << regNo << endl;
     cout << "Department of student 1 is: " << dept << endl;
     cout << "Section of student 1 is: " << sect << endl;
     cout << "Subject of student 1 is: " << subject << endl;
     cout << "Teacher of student 1 is: " << teacher << endl;
     cout << "Attendance of student 1 is: " << attendance << endl;
     cout << "Showing Results 2...." << endl;
     cout << "Name of student 2 2 is: " << name << endl;
     cout << "Session of student 2 is: " << session << endl;
     cout << "Registration Number of student 2 is: " << regNo << endl;
     cout << "Department of student 2 is: " << dept << endl;
     cout << "Section of student 2 is: " << sect << endl;
     cout << "Subject of student 2 is: " << subject << endl;
     cout << "Teacher of student 2 is: " << teacher << endl;
     cout << "Attendance of student 2 is: " << attendance << endl;
     return 0;
}
