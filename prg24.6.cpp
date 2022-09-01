#include <iostream>
#include <conio.h>

using namespace std;

struct student
{
     char name[50];
     int reg;
     float gpa;
};

int main()
{
     student std1, std2;
     cout << "Enter name: ";
     cin.getline(std1.name, 50);
     cout << "Enter registration number: ";
     cin >> std1.reg;
     cout<<"Enter GPA: ";
     cin>>std1.gpa;
     cin.ignore();
     cout << "Enter name: ";
     cin.getline(std2.name, 50);
     cout << "Enter registration number: ";
     cin >> std2.reg;
      cout<<"Enter GPA: ";
     cin>>std2.gpa;
     cout << "Resuts...." << endl;
     cout << "Name 1 is: " << std1.name << endl;
     cout << "Registration Number 1 is: " << std1.reg << endl;
     cout << "GPA 1 is: " << std1.gpa << endl;
     cout << "Name 2 is: " << std2.name << endl;
     cout << "Registration Number 2 is: " << std2.reg << endl;
     cout << "GPA 2 is: " << std2.gpa << endl;
     getch();
     return 0;
}
