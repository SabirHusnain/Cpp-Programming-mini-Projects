#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10];
     int max, min;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     max = arr[0];
     min = arr[0];
     for (int i = 0; i < 10; i++)
     {
          if (arr[i] > max)
          {
               max = arr[i];
          }
          if (arr[i] < min)
          {
               min = arr[i];
          }
     }
     cout << "Maximum number is: " << max << endl
          << "Minimum number is: " << min << endl;
     getch();
     return 0;
}