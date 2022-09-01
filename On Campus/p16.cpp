#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10], reverse[10], j=0;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     for (int i = 9; i >= 0; i--)
     {
          reverse[i] = arr[j];
          j++;
     }
     for (int i = 0; i < 10; i++)
     {
          cout << reverse[i] << endl;
     }
     getch();
     return 0;
}