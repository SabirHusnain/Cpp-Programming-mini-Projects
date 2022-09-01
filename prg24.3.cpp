#include <iostream>

using namespace std;

struct student
{
     int reg;
     char name[50];
};

main()
{
     student std1;
     cout << "Enter name: ";
     cin.getline(std1.name, 50);
     cout << "Enter Registration Number: ";
     cin >> std1.reg;
     cout << "Showing Results....." << endl;
     cout << "Name is: " << std1.name << endl;
     cout << "Registration Number is: " << std1.reg << endl;
     return 0;
}