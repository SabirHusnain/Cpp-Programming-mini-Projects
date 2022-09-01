#include <iostream>

using namespace std;

int main()
{
     int a[10], num;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> a[i];
     }
     num=a[0];
     a[0]=a[9];
     a[9]=num;
     cout<<"After Swaping:-"<<endl;
     for (int i = 0; i < 10; i++)
     {
          cout<<a[i]<<endl;
     }
     
     return 0;
}