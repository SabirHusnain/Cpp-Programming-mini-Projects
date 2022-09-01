#include <iostream>
#include <conio.h>

using namespace std;

struct reverse
{
     int uNum;
     int rem;
};

int main()
{
     reverse o1;
     cout << "Enter a number: ";
     cin >> o1.uNum;
     while (o1.uNum > 0)
     {
          o1.rem = o1.uNum % 10;
          o1.uNum /= 10;
          cout << o1.rem << endl;
     }

     getch();
     return 0;
}