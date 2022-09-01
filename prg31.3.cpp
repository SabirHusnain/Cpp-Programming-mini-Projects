#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a, *p;
     p = &a;
     cout << "Enter a numbers: ";
     cin >> *p;
     if (*p % 2 == 0)
     {
          cout << "Number is Even";
     }
     else
     {
          cout << "Number is Odd";
     }
     getch();
     return 0;
}