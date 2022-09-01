#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int arr[10], j=9;
     bool dec=true;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> arr[i];
     }
     for (int i = 0; i <=5; i++)
     {
          if(arr[i]!=arr[j])
          {
               dec=false;
               break;
          }
          j--;
     }
     if (dec)
     {
          cout<<"Array is same in revers"<<endl;
     }
     else
     {
          cout<<"Array is not same in revers"<<endl;
     }
     
     getch();
     return 0;
}