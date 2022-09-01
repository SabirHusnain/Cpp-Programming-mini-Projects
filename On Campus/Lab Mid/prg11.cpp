#include <iostream>
#include <conio.h>

using namespace std;

struct star
{
     int i, j;
};

int main()
{
     star s;
     for (s.i = 0; s.i < 5; s.i++)
     {
          for (s.j = 0; s.j <= s.i; s.j++)
          {
               cout << "*";
          }
          cout << endl;
     }
     getch();
     return 0;
}