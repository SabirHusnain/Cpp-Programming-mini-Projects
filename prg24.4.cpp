#include <iostream>

using namespace std;

struct student
{
     int reg;
     char name[50];
};

main()
{
     student std1, std2;
     cout << "Enter name 1: ";
     cin.getline(std1.name, 50);
     cout << "Enter Registration Number 1: ";
     cin >> std1.reg;
     cin.ignore();
     cout << "Enter name 2: ";
     cin.getline(std2.name, 50);
     cout << "Enter Registration Number 2: ";
     cin >> std2.reg;
     cout << "Showing Results....." << endl;
     cout << "Name 1 is: " << std1.name << endl;
     cout << "Registration Number 1 is: " << std1.reg << endl;
     cout << "Name 2 is: " << std2.name << endl;
     cout << "Registration Number 2 is: " << std2.reg << endl;
     return 0;
}
