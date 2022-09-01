#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct result
{
     int marks;
     float CGPA;
     char grade;
};

struct subject
{
     string sub[5], lab[4];
};

struct cHour
{
     int subHours[5];
     int labHours[4];
};

struct teacher
{
     string subTeach[5], labTeach[5];
};

struct record
{
     string name, city;
     string roll;
     result r;
     subject book;
     cHour credits;
     teacher prof;
};

int main()
{
     record obj;
     cout << "Enter Name: ";
     getline(cin, obj.name);
     cout << "Enter City Name: ";
     getline(cin, obj.city);
     cout << "Enter Roll No. : ";
     getline(cin, obj.roll);
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
     for (int i = 0; i < 5; i++)
     {
          cout << i + 1 << ". : ";
          getline(cin, obj.book.sub[i]);
     }
     // Entering Labs
     cout << endl
          << "Enter Name of Labs:-" << endl;
     for (int i = 0; i < 4; i++)
     {
          cout << i + 1 << ". : ";
          getline(cin, obj.book.lab[i]);
     }
     // Entering Credit Hours of Subjects
     cout << endl
          << "Enter Credit Hours with respect to Subjects:-" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << obj.book.sub[i] << ": ";
          cin >> obj.credits.subHours[i];
     }
     // Entering Credit Hours of Labs
     cout << endl
          << "Enter Credit Hours with respect to Labs:-" << endl;
     for (int i = 0; i < 4; i++)
     {
          cout << obj.book.lab[i] << ": ";
          cin >> obj.credits.labHours[i];
     }
     // Entering Subject Teachers
     cout << endl
          << "Enter Name of Teacher with respect to Subjects:-" << endl;
     cin.ignore();
     for (int i = 0; i < 5; i++)
     {
          cout << obj.book.sub[i] << ": ";
          getline(cin, obj.prof.subTeach[i]);
     }
     // Entering Lab Teachers
     cout << endl
          << "Enter Name of Teacher with respect to Labs:-" << endl;
     for (int i = 0; i < 4; i++)
     {
          cout << obj.book.sub[i] << ": ";
          getline(cin, obj.prof.labTeach[i]);
     }
     // Dispalying Student Data
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
     // Dispalying Subjects Data
     cout << endl
          << "Subjects Data:-" << endl;
     cout << "--------------------------------------------------" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << i+1 << "." << endl;
          cout << "Name: " << obj.book.sub[i] << endl;
          cout << "Teacher: " << obj.prof.subTeach[i] << endl;
          cout << "Credit Hours: " << obj.credits.subHours[i] << endl;
     }
     cout << "--------------------------------------------------" << endl;
     // Dispalying Lab Data
     cout << endl
          << "Labs Data:-" << endl;
     cout << "--------------------------------------------------" << endl;
     for (int i = 0; i < 4; i++)
     {
          cout << i+1 << "." << endl;
          cout << "Name: " << obj.book.lab[i] << endl;
          cout << "Teacher: " << obj.prof.labTeach[i] << endl;
          cout << "Credit Hours: " << obj.credits.labHours[i] << endl;
     }
     cout << "--------------------------------------------------" << endl;
     getch();
     return 0;
}
