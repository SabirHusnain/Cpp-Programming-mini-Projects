/*
Sabir Husnain
2019 MC 263
Topic: Program for use of Break Statement
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     for (int i = 1; i < 100; i++)
     {
          cout << i << endl;
          if (i == 55)
          {
               break;
          }
     }
     getch();
     return 0;
}