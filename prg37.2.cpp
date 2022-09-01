#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     char city[30];
     ofstream out("husnain.txt", ios::trunc);
     while (true)
     {
          cout << "Enter Name of city: ";
          cin >> city;
          if (city[0] == 'n' && city[1] == '\0')
          {
               break;
          }
          else
          {
               out << city << endl;
          }
     }
     out.close();
     getch();
     return 0;
}