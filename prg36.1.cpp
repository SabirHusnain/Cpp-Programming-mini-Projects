#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
     int n=10;
     float f=30.12;
     char c='A';
     ofstream out("file.txt");
     if (!out)
     {
          cout<<"Error in file opening !"<<endl;
     }
     else
     {
          out<<n<<" "<<f<<" "<<c;
          out.close();
     }
     getch();
     return 0;
}