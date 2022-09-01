#include <iostream>

using namespace std;

int main()
{
     int sum = 0;
     int num;
     int i = 0;
     cout << "Enter a Number: ";
     cin >> num;
     while (i <= num)
     {
          sum = sum + i;
          i++;
     }
     cout << sum;
     return 0;
}