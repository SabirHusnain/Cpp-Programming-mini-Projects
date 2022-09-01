#include <iostream>
#include <cstring>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     char city[50];
     // Writing Code
     ofstream out("Husnain.txt", ios::trunc);
     if (!out)
     {
          cout << "File opening error" << endl;
          exit(0);
     }
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
     // Reading Code
     ifstream in("Husnain.txt");
     if (!in)
     {
          cout << "File Opening Error" << endl;
          exit(0);
     }
     cout << endl
          << "Reading file..." << endl
          << endl;
     while (!in.eof())
     {
          in>>city;
          cout<<city<<endl;
     }
     in.close();
     getch();
     return 0;
}