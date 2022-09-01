#include <iostream>

using namespace std;

int main()
{
     int a[10], num;
     bool ans = false;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> a[i];
     }
     cout << "Enter number to find: ";
     cin >> num;
     for (int i = 0; i < 10; i++)
     {
          if (num == a[i])
          {
               ans = true;
          }
     }
     if (ans)
     {
          cout << "Number is in the array" << endl;
     }
     else
     {
          cout << "Number not found" << endl;
     }
     return 0;
}