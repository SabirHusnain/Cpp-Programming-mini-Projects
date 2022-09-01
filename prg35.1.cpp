/*
Sabir Husnain
2019 MC 263
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct phone
{
     int aCode, exchange, number;
};

int main()
{
     phone num1, num2;
     cout << "Enter first numebr:-" << endl;
     cout << "Enter area code: ";
     cin >> num1.aCode;
     cout << "Enter exchange: ";
     cin >> num1.exchange;
     cout << "Enter number: ";
     cin >> num1.number;
     cout << endl;
     cout << "Enter second numebr:-" << endl;
     cout << "Enter area code: ";
     cin >> num2.aCode;
     cout << "Enter exchange: ";
     cin >> num2.exchange;
     cout << "Enter number: ";
     cin >> num2.number;
     cout << "First Number is: (" << num1.aCode << ") "
          << num1.exchange << "-" << num1.number << endl;
     cout << "Second Number is: (" << num2.aCode << ") "
          << num2.exchange << "-" << num2.number << endl;
     getch();
     return 0;
}
