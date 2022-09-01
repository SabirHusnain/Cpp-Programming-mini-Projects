#include <iostream>

using namespace std;

int main()
{
     int a;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> a;
          if (a % 2 == 0)
          {
               cout << a << " is even" << endl;
          }
          else
          {
               cout << a << " is odd" << endl;
          }
     }
     return 0;
}