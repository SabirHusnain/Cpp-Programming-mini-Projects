#include <iostream>

using namespace std;

int main()
{
     int monthNumber, date, passed;
     int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     cout << "Enter month number: ";
     cin >> monthNumber;
     cout << "Enter day of the month: ";
     cin >> date;
     passed = date;
     for (int i = 0; i < (monthNumber - 1); i++)
     {
          passed = passed + month[i];
     }
     cout << "Days passed till: " << passed << endl;
     cout << "Days remaining: " << (365 - passed) << endl;
     return 0;
}