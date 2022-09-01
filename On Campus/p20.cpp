#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10], oddCount = 0;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     for (int i = 0; i < 10; i++)
     {
          if (arr[i] % 2 == 1)
          {
               oddCount++;
          }
     }
     cout << "There are " << oddCount << " odd numbers in array" << endl;
     getch();
     return 0;
}