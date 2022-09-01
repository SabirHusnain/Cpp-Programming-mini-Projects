/*
Sabir Husnain
2019 MC 263
Topic: Program for use of Pointers
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a[5], *p, min, max;
     cout << "Enter five numbers:-" << endl;
     for (int i = 0; i < 5; i++)
     {
          cin >> a[i];
     }
     p = a;
     max = min = a[0];
     for (int i = 0; i < 5; i++)
     {
          if (*p > max)
          {
               max = *p;
          }
          if (*p < min)
          {
               min = *p;
          }
          p++;
     }
     cout << "Greatest numbers is " << max << endl;
     cout << "Smallest number is " << min << endl;
     getch();
     return 0;
}