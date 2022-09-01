/*
Sabir Husnain
2019 MC 263
*/

#include <iostream>
#include <conio.h>

using namespace std;

void swapByValue(int a, int b)
{
     int temp = a;
     a = b;
     b = temp;
     cout << "Number 1: " << a << endl
          << "Number 2: " << b << endl;
}

void swapByReference(int &a, int &b)
{
     int temp = a;
     a = b;
     b = temp;
}

int main()
{
     int num1, num2;
     cout << "Enter first number: ";
     cin >> num1;
     cout << "Enter second number: ";
     cin >> num2;
     cout << "Pass by value:-" << endl;
     swapByValue(num1, num2);
     cout << endl
          << "Pass by Reference:-" << endl;
     swapByReference(num1, num2);
     cout << "Number 1: " << num1 << endl
          << "Number 2: " << num2 << endl;
     getch();
     return 0;
}