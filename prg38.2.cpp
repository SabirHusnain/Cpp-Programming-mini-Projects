/*
Name: Sabir Husnain
Roll No. 2019 MC 263
Section: A
*/

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     char name[50];
     cout << "Enter your name:-" << endl;
     cin.getline(name, 50);
     ofstream out("name.txt");
     if (!out)
     {
          cout << "File Opening Error" << endl;
          exit(0);
     }
     out << name;
     out.close();
     getch();
     return 0;
}