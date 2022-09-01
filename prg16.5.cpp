#include <iostream>

using namespace std;

int main()
{
     int num[10], min;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> num[i];
     }
     min = num[0];
     for (int i = 0; i < 10; i++)
     {
          if (num[i]<min)
          {
               min = num[i];
          }
     }
     cout << "Minimum number is: " << min << endl;
     return 0;
}
