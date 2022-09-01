// Program for storing of person's data including degrees
// We can store person's name, father's name, CNIC, Date of 
// birth, Eductional Degrees

#include <iostream>
#include <conio.h>

using namespace std;

// Structure for Date of birth
struct date
{
     int day;
     int month;
     int year;
};

// Structure for educational degrees
struct education
{
     char institute[50];
     char degree[50];
     int year = 0;
};

//Structure for personal data
struct personData
{
     char name[50];
     char fatherName[50];
     char cnic[20];
     date birthDate;
     char address[100];
     education edu[10];
};

int main()
{
     cout << "Sabir Husnain" << endl
          << "2019 MC 263" << endl
          << endl;
     int degNo = 0; // Variable for number of degrees
     personData obj;
     // Obtaining Data
     cout << "Enter your name: ";
     cin.getline(obj.name, 50);
     cout << "Enter Father's name: ";
     cin.getline(obj.fatherName, 50);
     cout << "Enter CNIC: ";
     cin.getline(obj.cnic, 20);
     cout << "Enter date of birth:-" << endl;
     cout << "Date: ";
     cin >> obj.birthDate.day;
     cout << "Month: ";
     cin >> obj.birthDate.month;
     cout << "Year: ";
     cin >> obj.birthDate.year;
     cin.ignore();
     cout << "Enter address: ";
     cin.getline(obj.address, 50);
     cout << "How many degrees you want to enter: ";
     cin >> degNo;
     if (degNo != 0)
     {
          // If degNo is not 0
          for (int i = 0; i < degNo; i++)
          {
               // Inputing of degrees
               cin.ignore();
               cout << "Enter degree: ";
               cin.getline(obj.edu[i].degree, 50);
               cout << "Enter name of institute: ";
               cin.getline(obj.edu[i].institute, 50);
               cout << "Enter passing year: ";
               cin >> obj.edu[i].year;
               cout << endl;
          }
     }
     // Displaying Data
     cout << endl
          << "Displaying Data..." << endl
          << endl;
     cout << "Name: " << obj.name << endl;
     cout << "Father Name: " << obj.fatherName << endl;
     cout << "CNIC: " << obj.cnic << endl;
     cout << "Date of Birth: " << obj.birthDate.day << "/"
          << obj.birthDate.month << "/" << obj.birthDate.year << endl;
     cout << "Address: " << obj.address << endl;
     cout << "Degrees:-" << endl;
     for (int i = 0; i < degNo; i++)
     {
          cout << "--->" << obj.edu[i].degree << ":-" << endl;
          cout << "Institute: " << obj.edu[i].institute << endl;
          cout << "Pass out year: " << obj.edu[i].year << endl
               << endl;
     }
     getch();
     return 0;
}
