#include <iostream>
#include <conio.h>
using namespace std;

struct result
{
     int marks;
     float CGPA;
     char grade;
};

struct subject
{
     char sub1[50], sub2[50], sub3[50], sub4[50], sub5[50];
     char lab1[50], lab2[50], lab3[50], lab4[50];
};

struct cHour
{
     int sub[5];
     int lab[4];
};

struct teacher
{
     char subTeach1[50], subTeach2[50], subTeach3[50], subTeach4[50], subTeach5[50];
     char labTeach1[50], labTeach2[50], labTeach3[50], labTeach4[50];
};

struct record
{
     char name[50], city[50];
     int roll;
     result r;
     subject book;
     cHour credits;
     teacher prof;
};

int main()
{
     record obj;
     cout << "Enter Name: ";
     cin.getline(obj.name, 50);
     cout << "Enter City Name: ";
     cin.getline(obj.city, 50);
     cout << "Enter Roll No. : ";
     cin >> obj.roll;
     cout << "Enter CGPA: ";
     cin >> obj.r.CGPA;
     cout << "Enter Marks: ";
     cin >> obj.r.marks;
     cout << "Enter Grade: ";
     cin >> obj.r.grade;
     cin.ignore();
     // Entering Subjects
     cout << endl
          << "Enter Name of Subjects:-" << endl;
     cin.getline(obj.book.sub1, 50);
     cin.getline(obj.book.sub2, 50);
     cin.getline(obj.book.sub3, 50);
     cin.getline(obj.book.sub4, 50);
     cin.getline(obj.book.sub5, 50);
     // Entering Labs
     cout << endl
          << "Enter Name of Labs:-" << endl;
     cin.getline(obj.book.lab1, 50);
     cin.getline(obj.book.lab2, 50);
     cin.getline(obj.book.lab3, 50);
     cin.getline(obj.book.lab4, 50);
     // Entering Credit Hours of Subjects
     cout << endl
          << "Enter Credit Hours with respect to Subjects:-" << endl;
     cout << obj.book.sub1 << ": ";
     cin >> obj.credits.sub[0];
     cout << obj.book.sub2 << ": ";
     cin >> obj.credits.sub[1];
     cout << obj.book.sub3 << ": ";
     cin >> obj.credits.sub[2];
     cout << obj.book.sub4 << ": ";
     cin >> obj.credits.sub[3];
     cout << obj.book.sub5 << ": ";
     cin >> obj.credits.sub[4];
     // Entering Credit Hours of Labs
     cout << endl
          << "Enter Credit Hours with respect to Labs:-" << endl;
     cout << obj.book.lab1 << ": ";
     cin >> obj.credits.lab[0];
     cout << obj.book.lab2 << ": ";
     cin >> obj.credits.lab[1];
     cout << obj.book.lab3 << ": ";
     cin >> obj.credits.lab[2];
     cout << obj.book.lab4 << ": ";
     cin >> obj.credits.lab[3];
     // Entering Subject Teachers
     cout << endl
          << "Enter Name of Teacher with respect to Subjects:-" << endl;
     cout << obj.book.sub1 << ": ";
     cin.ignore();
     cin.getline(obj.prof.subTeach1, 50);
     cout << obj.book.sub2 << ": ";
     cin.getline(obj.prof.subTeach2, 50);
     cout << obj.book.sub3 << ": ";
     cin.getline(obj.prof.subTeach3, 50);
     cout << obj.book.sub4 << ": ";
     cin.getline(obj.prof.subTeach4, 50);
     cout << obj.book.sub5 << ": ";
     cin.getline(obj.prof.subTeach5, 50);
     // Entering Lab Teachers
     cout << endl
          << "Enter Name of Teacher with respect to Labs:-" << endl;
     cout << obj.book.lab1 << ": ";
     cin.getline(obj.prof.labTeach1, 50);
     cout << obj.book.lab2 << ": ";
     cin.getline(obj.prof.labTeach2, 50);
     cout << obj.book.lab3 << ": ";
     cin.getline(obj.prof.labTeach3, 50);
     cout << obj.book.lab4 << ": ";
     cin.getline(obj.prof.labTeach4, 50);
     cout << endl
          << "Student Data:-" << endl;
     cout << "--------------------------------------------------" << endl;
     cout << "Name: " << obj.name << endl;
     cout << "Roll No. : " << obj.roll << endl;
     cout << "Name of city: " << obj.city << endl;
     cout << "CGPA: " << obj.r.CGPA << endl;
     cout << "Marks: " << obj.r.marks << endl;
     cout << "Grade: " << obj.r.grade << endl;
     cout << "--------------------------------------------------" << endl;
     cout << endl
          << "Subjects Data:-" << endl;
     cout << "--------------------------------------------------" << endl;
     cout << "1." << endl;
     cout << "Name: " << obj.book.sub1 << endl;
     cout << "Teacher: " << obj.prof.subTeach1 << endl;
     cout << "Credit Hours: " << obj.credits.sub[0] << endl;
     cout << "2." << endl;
     cout << "Name: " << obj.book.sub2 << endl;
     cout << "Teacher: " << obj.prof.subTeach2 << endl;
     cout << "Credit Hours: " << obj.credits.sub[1] << endl;
     cout << "3." << endl;
     cout << "Name: " << obj.book.sub3 << endl;
     cout << "Teacher: " << obj.prof.subTeach3 << endl;
     cout << "Credit Hours: " << obj.credits.sub[2] << endl;
     cout << "4." << endl;
     cout << "Name: " << obj.book.sub4 << endl;
     cout << "Teacher: " << obj.prof.subTeach4 << endl;
     cout << "Credit Hours: " << obj.credits.sub[3] << endl;
     cout << "5." << endl;
     cout << "Name: " << obj.book.sub5 << endl;
     cout << "Teacher: " << obj.prof.subTeach5 << endl;
     cout << "Credit Hours: " << obj.credits.sub[4] << endl;
     cout << "--------------------------------------------------" << endl;
     cout << endl
          << "Labs Data:-" << endl;
     cout << "--------------------------------------------------" << endl;
     cout << "1." << endl;
     cout << "Name: " << obj.book.lab1 << endl;
     cout << "Teacher: " << obj.prof.labTeach1 << endl;
     cout << "Credit Hours: " << obj.credits.lab[0] << endl;
     cout << "2." << endl;
     cout << "Name: " << obj.book.lab2 << endl;
     cout << "Teacher: " << obj.prof.labTeach2 << endl;
     cout << "Credit Hours: " << obj.credits.lab[1] << endl;
     cout << "3." << endl;
     cout << "Name: " << obj.book.lab3 << endl;
     cout << "Teacher: " << obj.prof.labTeach3 << endl;
     cout << "Credit Hours: " << obj.credits.lab[2] << endl;
     cout << "4." << endl;
     cout << "Name: " << obj.book.lab4 << endl;
     cout << "Teacher: " << obj.prof.labTeach4 << endl;
     cout << "Credit Hours: " << obj.credits.lab[3] << endl;
     cout << "--------------------------------------------------" << endl;
     getch();
     return 0;
}