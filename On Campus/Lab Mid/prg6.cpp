#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num, sum = 0;
     cout << "Enter a number: ";
     cin >> num;
     while (num > 0)
     {
          sum += num % 10;
          num /= 10;
     }
     cout << "Sum of digits is: " << sum << endl;
     getch();
     return 0;
}