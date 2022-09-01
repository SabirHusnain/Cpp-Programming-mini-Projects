#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10], num, index;
     bool dec = false;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     cout << "Enter a number to search in array: ";
     cin >> num;
     for (int i = 0; i < 10; i++)
     {
          if (num == arr[i])
          {
               dec = true;
               index = i;
               break;
          }
     }
     if (dec)
     {
          cout << num << " found in array at " << index << " index" << endl;
     }
     getch();
     return 0;
}