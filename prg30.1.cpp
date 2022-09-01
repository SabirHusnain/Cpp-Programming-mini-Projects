#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
     int arr[5], min = 0, max = 0;
     int *p;
     for (int i = 0; i < 5; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i]; // 4 1 5 2 3
     }
     p = arr;
     max = *p;
     min = *p;
     for (int i = 0; i < 5; i++)
     {
          if (*p > max) //2 > 5
          {
               max = *p; //max = 5
          }
          if (*p < min) //5 < 1
          {
               min = *p; // min = 1
          }
          p++; //a[3]
     }
     cout << "Maximum number is: " << max << endl;
     cout << "Minimum number is: " << min << endl;
     getch();
     return 0;
}