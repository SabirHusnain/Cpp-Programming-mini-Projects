#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     int num;
     char a[15];
     cout << "Enter a number: ";
     cin >> num;
     ofstream out("Table.txt");
     if (!out)
     {
          cout << "File Opening Error" << endl;
          exit(1);
     }
     for (int i = 1; i <= 10; i++)
     {
          out << num << " * " << i << " = " << num * i << endl;
     }
     out.close();
     ifstream in("Table.txt");
     if (!in)
     {
          cout << "File Opening Error" << endl;
          exit(1);
     }
     for (int i = 1; i <= 10; i++)
     {
          in.getline(a, 15);
          cout << a << endl;
     }
     in.close();
     getch();
     return 0;
}