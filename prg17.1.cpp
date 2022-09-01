#include <iostream>

using namespace std;

int main()
{
     int a[10], num;
     bool ans;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter a number: ";
          cin >> a[i];
     }
     cout << "Enter a number to find in array number: ";
     cin >> num;
     for (int i = 0; i < 10; i++)
     {
          if (a[i]==num)
          {
               ans=true;
          }
     }
     if (ans)
     {
          cout<<"You win"<<endl;
     }
     else
     {
          cout<<"You lose"<<endl;
     }
     return 0;
}