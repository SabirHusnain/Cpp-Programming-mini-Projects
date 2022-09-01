#include <iostream>

using namespace std;

int main()
{
     int a[10];
     for (int i = 0; i <= 9; i++)
     {
          cout<<"Enter a number: ";
          cin>>a[i];
     }
     cout<<"Reverse order:-"<<endl;
     for (int i = 9; i >= 0; i--)
     {
          cout<<a[i]<<endl;
     }
     return 0;
}