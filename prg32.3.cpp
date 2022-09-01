#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     char turn;
     cout<<"Enter your choice (L , R): ";
     cin>>turn;
     if (turn=='l' || turn=='L')
     {
          cout<<"You have selected Sialkot"<<endl;
     }
     else
     {
          cout<<"You have selected Gujranwala"<<endl;
     }
     getch();
     return 0;
}