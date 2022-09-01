#include <iostream>

using namespace std;

int main()
{
     int number = 0, sumOdd = 0, sumEven = 0;
     cout << "Enter a number: ";
     cin >> number;
     while (1 <= number)
     {
          if (number % 2 == 0)
          {
               sumEven = sumEven + number;
          }
          else
          {
               sumOdd = sumOdd + number;
          }
          number--;
     }
     cout << "Even Sum: " << sumEven << endl;
     cout << "Even Odd: " << sumOdd << endl;
     return 0;
}
