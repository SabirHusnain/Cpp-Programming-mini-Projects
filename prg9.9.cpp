#include <iostream>

using namespace std;

int main()
{
     char alp = 'A';
     int num;
     num = (int)alp;
     while (num <= (int)'Z')
     {
          cout << alp << endl;
          num++;
          alp = (char)num;
     }
     return 0;
}