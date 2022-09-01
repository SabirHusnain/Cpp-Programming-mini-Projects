#include <iostream>

using namespace std;

int main()
{
     int a[4];
     for (int i = 0; i <= 3; i++)
     {
          cout<<"Enter a number: ";
          cin>>a[i];
     }
     for (int i = 0; i <= 3; i++)
     {
          cout<<a[i]<<endl;
     }
     return 0;
}