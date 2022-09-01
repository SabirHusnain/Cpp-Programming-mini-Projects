#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     int num;
     cout<<"Enter a number: ";
     cin>>num;

     ofstream out("Revrse_Of_Digits.txt");
     if(!out)
     {
          cout<<"Error";
          exit(0);
     }
     while (num>0)
     {
          out<<num%10<<endl;
          num/=10;
     }
     
     getch();
     return 0;
}