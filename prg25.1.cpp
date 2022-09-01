#include <iostream>

using namespace std;

struct Student
{
     char stuName[30];
     int stuRollNo;
     int stuAge;
};

void printStudentInfo(Student);
Student getStudentInfo(void);

int main()
{
     Student s;
     s = getStudentInfo();
     printStudentInfo(s);
     return 0;
}

Student getStudentInfo()
{
     Student a;
     cout << "Enter Student Name: ";
     cin.getline(a.stuName, 30);
     cout << "Enter Student Roll No: ";
     cin >> a.stuRollNo;
     cout << "Enter Student Age: ";
     cin >> a.stuAge;
     return a;
}

void printStudentInfo(Student a)
{
     cout << "Student Record:" << endl;
     cout << "Name: " << a.stuName << endl;
     cout << "Roll No: " << a.stuRollNo << endl;
     cout << "Age: " << a.stuAge;
}