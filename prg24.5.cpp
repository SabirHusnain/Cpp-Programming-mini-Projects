#include <iostream>

using namespace std;

struct student
{
     int reg;
     char name[50];
};

main()
{
     student std[5];
     for (int i = 0; i < 5; i++)
     {
          cout << "Enter name " << i+1 << " : ";
          cin.getline(std[i].name, 50);
          cout << "Enter Registration Number " << i+1 << " : ";
          cin >> std[i].reg;
          cin.ignore();
     }
     cout << "Showing Results....." << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << "Name " << i+1 << " is: " << std[i].name << endl;
          cout << "Registration Number " << i+1 << " is: " << std[i].reg << endl;
     }
     return 0;
}
