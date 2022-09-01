#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10], evenCount = 0;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     for (int i = 0; i < 10; i++)
     {
          if (arr[i] % 2 == 0)
          {
               evenCount++;
          }
     }
     cout << "There are " << evenCount << " even numbers in array" << endl;
     getch();
     return 0;
}