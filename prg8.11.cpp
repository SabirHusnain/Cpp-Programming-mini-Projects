#include <iostream>

using namespace std;

int main()
{
     int a = 0;
     int b = 0;
     cout << "Enter starting value of loop: ";
     cin >> a;
     cout << "Enter ending value of loop: ";
     cin >> b;
     for (int i = a; i <= b; i++)
     {
          cout << i << endl;
     }
     return 0;
}