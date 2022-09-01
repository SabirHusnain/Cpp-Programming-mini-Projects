#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num;
     cout << "Enter a number: ";
     cin >> num;
     while (true)
     {
          num -= 2;
          if (num == 0)
          {
               cout << "Number is Even" << endl;
               break;
          }
          if (num == 1)
          {
               cout << "Number is Odd" << endl;
               break;
          }
     }
     getch();
     return 0;
}