#include <iostream>

using namespace std;

int main()
{
     int i=0;
     char a='a';
     while (a!='c')
     {
          cout<<"Enter an Alphabet: ";
          cin>>a;
          i++;
     }
     cout<<"Loop runs: "<<i<<" times"<<endl;
     return 0;
}