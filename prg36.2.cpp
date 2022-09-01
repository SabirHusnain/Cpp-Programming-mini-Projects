#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     int n, sum = 0, prod = 1;
     cout << "Enter a number: ";
     cin >> n;
     for (int i = n; i > 0; i--)
     {
          sum = sum + i;
          prod = prod * i;
     }
     ofstream out("file.txt");
     if (!out)
     {
          cout << "Opening Error" << endl;
          exit(1);
     }
     for (int i = n; i > 0; i--)
     {
          out << i << endl;
     }
     out << "#############" << endl;
     out << "Sum " << sum << endl;
     out << "#############" << endl;
     out << "Product " << prod << endl;
     out << "#############" << endl;
     out << "Average " << sum / n << endl;
     out << "#############" << endl;
     getch();
     return 0;
}