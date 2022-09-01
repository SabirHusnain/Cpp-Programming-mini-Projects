#include <iostream>

using namespace std;

int main()
{
     char a;
     for (int i = 0; i < 10; i++)
     {
          cout << "Enter an alphabet: ";
          cin >> a;
          if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
          {
               cout << a << " is Vowel" << endl;
          }
          else
          {
               cout << a << " is Consonant" << endl;
          }
     }
     return 0;
}