#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int i, j, *a = &i, *b = &j;
     for (*a = 0; *a < 5; (*a)++)
     {
          for (*b = 0; *b <= *a; (*b)++)
          {
               cout << "*";
          }
          cout << endl;
     }
     getch();
     return 0;
}