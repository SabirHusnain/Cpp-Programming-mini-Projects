#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     ofstream out("Pattern.txt");
     if(!out)
     {
          cout<<"Error";
          exit(0);
     }
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               out<<"*";
          }
          out<<endl;
     }
     getch();
     return 0;
}