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
     /*
     I have a text file named UET.txt and contains information of a student:-

     Name: Sabir Husnain
     Roll No. 2019-MC-263
     Department: Mechatronics
     CGPA: 3.72

     Now I will read that data and write it to other file named Engineering.txt
     */
     char temp[100];
     ifstream in("UET.txt");
     ofstream out("Engineering.txt");
     if (!in)
     {
          cout << "File Opening Error for file from which data is being copied" << endl;
          exit(0);
     }
     if (!out)
     {
          cout << "File Opening Error for file in which data is being copied" << endl;
          exit(0);
     }
     while (in.eof() == 0)
     {
          in.getline(temp, 100);
          out << temp << endl;
     }
     cout << "Data has successfully been saved" << endl;
     getch();
     return 0;
}