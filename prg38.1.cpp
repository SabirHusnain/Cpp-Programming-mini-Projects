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
     ofstream out("test.txt");
     if (!out)
     {
          cout << "Error: File not created" << endl;
          exit(0);
     }
     cout << "File created successfully" << endl;
     out.close();
     getch();
     return 0;
}