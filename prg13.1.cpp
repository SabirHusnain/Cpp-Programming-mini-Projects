#include <iostream>

using namespace std;

int main()
{
     int num, sum = 0;
     for (int i = 1; i <= 10; i++)
     {
          cout << "Enter a number: ";
          cin >> num;
          if (num < 0)
          {
               break;
          }
          else
          {
               sum = sum + num;
          }
     }
     cout << "Sum is: " << sum;
     return 0;
}