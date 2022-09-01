#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a, *p = &a;
     cout << "Enter a number: ";
     cin >> a;
     for (int i = 1; i <= 10; i++)
     {
          cout << *p << " * " << i << " = " << *p * i << endl;
     }
     getch();
     return 0;
}