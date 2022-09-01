/*
Name: Sabir Husnain
Roll No. 2019 MC 263
Section: A
*/

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

// Let we are using the name file in which name was stored in Program "prg38.2.cpp"

int main()
{
     int count = 0;
     char ch;
     ifstream in("name.txt");
     if (!in)
     {
          cout << "File Opening Error" << endl;
          exit(0);
     }
     while (in.eof() == 0)
     {
          in.get(ch);
          if (ch != '\0' && ch != '\r') // Here spaces are included in character count
          {
               count++;
          }
     }
     cout << "Total Number of characters are " << count << endl;
     getch();
     return 0;
}