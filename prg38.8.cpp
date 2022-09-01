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
     int count = 0;
     char ch[100];
     ifstream in("Engineering.txt");
     if (!in)
     {
          cout << "File Opening Error" << endl;
          exit(0);
     }
     while (in.eof() == 0)
     {
          in.getline(ch, 100);
          if (ch[0] != '\0')
          {
               count++;
          }
     }
     cout << "Total number of line are " << count << endl;
     getch();
     return 0;
}