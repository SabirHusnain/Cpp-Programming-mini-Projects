#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num, *n = &num;
     cout << "Enter a number: ";
     cin >> *n;
     while (*n > 0)
     {
          cout << *n % 10 << endl;
          *n /= 10;
     }

     getch();
     return 0;
}