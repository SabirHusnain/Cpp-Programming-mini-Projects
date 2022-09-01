#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     for (int i = 1; i <= 15; i++)
     {
          if (i == 6)
          {
               continue; // 6 will be skipped
          }
          if (i == 10)
          {
               break; // loop will stop at i=10 and 10 will not print
          }
          cout << i << endl;
     }
     getch();
     return 0;
}