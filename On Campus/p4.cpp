#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a, i = 1, sum = 0;
     cout << "Enter a number: ";
     cin >> a;
     do
     {
          if (i % 2 == 0)
          {
               sum += i;
          }
          i++;
     } while (i <= a);
     cout << "Sum of Even number upto " << a << " is: " << sum << endl;
     getch();
     return 0;
}