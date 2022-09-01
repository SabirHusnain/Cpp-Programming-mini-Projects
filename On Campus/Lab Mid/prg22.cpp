#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num, sum = 0, *s = &sum, *n = &num;
     cout << "Enter a number: ";
     cin >> *n;
     while (*n > 0)
     {
          *s += (*n) % 10;
          *n /= 10;
     }
     cout << "Sum of digits is: " << *s << endl;
     getch();
     return 0;
}