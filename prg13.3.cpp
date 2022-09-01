#include <iostream>

using namespace std;

int main()
{
     int num, sum = 0, count = 0, prod = 1;
     for (int i = 1; i <= 10; i++)
     {
          cout << "Enter a number: ";
          cin >> num;
          if (num <= 0)
          {
               break;
          }
          else
          {
               sum = sum + num;
               prod = prod * num;
               count++;
          }
     }
     cout << "Sum is: " << sum << endl;
     cout << "Average is: " << sum / count << endl;
     cout << "Product is: " << prod << endl;
     return 0;
}