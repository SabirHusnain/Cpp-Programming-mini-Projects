#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int session, attendance;
     char name[50], regNo[50], dept[50], subject[50], sect[50], teacher[50];
     cout << "Enter name of student: ";
     cin.getline(name, 50);
     cout << "Enter session of student: ";
     cin>>session;
     cin.ignore();
     cout << "Enter registration number of student: ";
     cin.getline(regNo, 50);
     cout << "Enter department of student: ";
     cin.getline(dept, 50);
     cout << "Enter section of student: ";
     cin.getline(sect, 50);
     cout << "Enter subject of student: ";
     cin.getline(subject, 50);
     cout << "Enter name of teacher of student: ";
     cin.getline(teacher, 50);
     cout << "Enter attendance of student: ";
     cin >> attendance;
     cout << "Showing Results...." << endl;
     cout << "Name of student is: " << name << endl;
     cout << "Session of student is: " << session << endl;
     cout << "Registration Number of student is: " << regNo << endl;
     cout << "Department of student is: " << dept << endl;
     cout << "Section of student is: " << sect << endl;
     cout << "Subject of student is: " << subject << endl;
     cout << "Teacher of student is: " << teacher << endl;
     cout << "Attendance of student is: " << attendance << endl;
     return 0;
}
