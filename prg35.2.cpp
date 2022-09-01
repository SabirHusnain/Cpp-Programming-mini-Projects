/*
Sabir Husnain
2019 MC 263
*/

#include <iostream>
#include <conio.h>

using namespace std;

void smallerNo(int &a, int &b)
{
     if (a < b)
     {
          a = 0;
     }
     else
     {
          b = 0;
     }
}

int main()
{
     int num1, num2;
     cout << "Enter first number: ";
     cin >> num1;
     cout << "Enter second number: ";
     cin >> num2;
     cout << "Numbers before function call:-" << endl
          << "Number 1: " << num1 << endl
          << "Number 2: " << num2 << endl;
     smallerNo(num1, num2);
     cout << "Numbers after function call:-" << endl
          << "Number 1: " << num1 << endl
          << "Number 2: " << num2 << endl;
     getch();
     return 0;
}