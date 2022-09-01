#include <iostream>

using namespace std;

int main()
{
     int sum = 0;
     for (int i = 1; i <= 100; i++)
     {
          if (i % 2 == 1)
          {
               continue;
          }
          else
          {
               if (sum > 50)
               {
                    break;
               }
               sum = sum + i;
          }
     }
     cout << "Sum of odd numbers is: " << sum << endl;
     return 0;
}