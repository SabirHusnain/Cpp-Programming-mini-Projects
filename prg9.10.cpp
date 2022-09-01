#include <iostream>

using namespace std;

int main()
{
     int num;
     int oSum = 0;
     int i = 1;
     cout << "Enter a number: ";
     cin >> num;
     while (i <= num)
     {
          oSum = oSum + i;
          i = i + 2;
     }
     cout << "Sum of Odd Numbers is: " << oSum;
     return 0;
}