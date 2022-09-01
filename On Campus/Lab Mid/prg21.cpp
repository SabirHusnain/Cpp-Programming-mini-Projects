#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int a[5], *arr[5];
     for (int i = 0; i < 5; i++)
     {
          arr[i]=&a[i];
          cout << "Enter a number: ";
          cin >> *arr[i];
     }
     for (int i = 0; i < 5; i++)
     {
          for (int j = i + 1; j < 5; j++)
          {
               if (*arr[j] < *arr[i])
               {
                    int temp = *arr[i];
                    *arr[i] = *arr[j];
                    *arr[j] = temp;
               }
          }
     }
     cout << endl
          << "Array in descending order:-" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << a[i] << " ";
     }
     getch();
     return 0;
}