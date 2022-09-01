#include <iostream>
#include <conio.h>

using namespace std;

struct program
{
     int num;
};

int main()
{
     program o1;
     cout << "Enter a number: ";
     cin >> o1.num;
     while (true)
     {
          o1.num -= 2;
          if (o1.num == 0)
          {
               cout << "Number is Even" << endl;
               break;
          }
          if (o1.num == 1)
          {
               cout << "Number is Odd" << endl;
               break;
          }
     }
     getch();
     return 0;
}