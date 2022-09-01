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
     ifstream in("name.txt");
     if (!in)
     {
          cout << "File Opening Error" << endl;
          exit(0);
     }
     in.getline(name, 50);
     cout << "Name is: " << name << endl;
     in.close();
     getch();
     return 0;
}