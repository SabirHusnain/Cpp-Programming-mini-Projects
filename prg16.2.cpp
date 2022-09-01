#include <iostream>

using namespace std;

int main()
{
     int num[10];
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> num[i];
     }
     cout << "Even numbers are:-" << endl;
     for (int i = 0; i < 10; i++)
     {
          if (num[i] % 2 == 0)
          {
               cout << num[i] << endl;
          }
     }
     return 0;
}