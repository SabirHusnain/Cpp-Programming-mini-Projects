#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10], j = 9, temp;
     bool dec = true;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     for (int i = 0; i <= 5; i++)
     {
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
          j--;
     }
     for (int i = 0; i < 10; i++)
     {
          cout << arr[i] << endl;
     }

     getch();
     return 0;
}