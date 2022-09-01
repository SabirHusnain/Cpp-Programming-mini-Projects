#include <iostream>

using namespace std;

int main()
{
     int sum = 0;
     for (int i = 1; i <= 100; i++)
     {
          if (i % 2 == 0)
          {
               continue;
          }
          else
          {
               sum = sum + i;
          }
     }
     cout << "Sum of odd numbers is: " << sum << endl;
     return 0;
}