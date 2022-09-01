#include <iostream>

using namespace std;

int main()
{
     int a[10];
     bool b;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> a[i];
     }
     for (int i = 0; i < 10; i++)
     {
          if (a[i] == 1)
          {
               b = true;
               break;
          }
     }
     if (b)
     {
          cout << "1 was entered" << endl;
     }
     else
     {
          cout << "1 was not entered" << endl;
     }
     return 0;
}