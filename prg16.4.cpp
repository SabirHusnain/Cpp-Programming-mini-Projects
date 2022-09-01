#include <iostream>

using namespace std;

int main()
{
     int num[10], max;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> num[i];
     }
     max = num[0];
     for (int i = 0; i < 10; i++)
     {
          if (num[i]>max)
          {
               max = num[i];
          }
     }
     cout << "Maximum number is: " << max << endl;
     return 0;
}