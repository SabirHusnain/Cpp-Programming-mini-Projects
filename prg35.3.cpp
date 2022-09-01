/*
Sabir Husnain
2019 MC 263
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
     int n;
     cout << "How many number you want to enter: ";
     cin >> n;
     float arr[n], *ptr, sum = 0, prod = 1;
     ptr = arr;
     for (int i = 0; i < n; i++)
     {
          cout << "Enter " << i + 1 << " number: ";
          cin >> *ptr++;
     }
     for (int i = 0; i < n; i++)
     {
          ptr--;
          sum = sum + (*ptr);
          prod = prod * (*ptr);
     }
     cout << endl;
     cout << "Sum is: " << sum << endl;
     cout << "Product is: " << prod << endl;
     cout << "Average is: " << sum / n << endl;
     getch();
     return 0;
}