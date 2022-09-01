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
          break;
          for (int j = 1; j < 100; j++)
          {
               cout << j << endl;
          }
     }
     getch();
     return 0;
}