#include <iostream>

using namespace std;

int main()
{
     int num;
     int eSum = 0;
     int i = 0;
     cout << "Enter a number: ";
     cin >> num;
     while (i <= num)
     {
          eSum = eSum + i;
          i = i + 2;
     }
     cout << "Sum of Even Numbers is: " << eSum;
     return 0;
}