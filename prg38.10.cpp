/*
Name: Sabir Husnain
Roll No. 2019 MC 263
Section: A
*/

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

// Function will get data from user
void getData(float &, float &, float &);
// Function will find maximum number
float maximum(float &, float &, float &);
// Function will write data in the file named "Maximum_Number.txt"
void writeFile(float &, float &, float &, float &);

int main()
{
     float num1, num2, num3, max;
     getData(num1, num2, num3);
     max = maximum(num1, num2, num3);
     writeFile(num1, num2, num3, max);
     getch();
     return 0;
}

void getData(float &a, float &b, float &c)
{
     cout << "Enter three number:-" << endl;
     cout << "Number 1: ";
     cin >> a;
     cout << "Number 2: ";
     cin >> b;
     cout << "Number 3: ";
     cin >> c;
}

float maximum(float &a, float &b, float &c)
{
     int res;
     if (a > b && a > c)
     {
          res = a;
     }
     else if (b > a && b > c)
     {
          res = b;
     }
     else
     {
          res = c;
     }
     return res;
}

void writeFile(float &a, float &b, float &c, float &res)
{
     ofstream out("Maximum_Number.txt");
     if (!out)
     {
          cout << "File Opening Error" << endl;
          exit(0);
     }
     out << "Maximum Number of " << a << ", " << b << ", " << c << " is: " << res;
}