#include <iostream>

using namespace std;

int main()
{
     int num, sum = 0, count = 0;
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
               count++;
          }
     }
     cout << "Sum is: " << sum << endl;
     cout << "Average is: " << sum / count;
     return 0;
}