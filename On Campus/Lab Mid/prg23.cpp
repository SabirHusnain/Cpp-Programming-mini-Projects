#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int num, *n=&num;
     cout << "Enter a number: ";
     cin >> *n;
     while (true)
     {
          *n -= 2;
          if (*n == 0)
          {
               cout << "Number is Even" << endl;
               break;
          }
          if (*n == 1)
          {
               cout << "Number is Odd" << endl;
               break;
          }
     }
     getch();
     return 0;
}