#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10];
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     cout << endl
          << "Displaying numbers:-" << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << arr[i] << endl;
     }
     getch();
     return 0;
}