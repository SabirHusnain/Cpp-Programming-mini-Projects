#include <iostream>
using namespace std;
int main()
{
     char a;
     cout << "Enter an alphabet: ";
     cin >> a;
     if ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u'))
     {
          cout << "The alphabet is a vowel" << endl;
          if (a == 'a')
          {
               cout << "The entered alphabet is 'a'";
          }
          else if (a == 'e')
          {
               cout << "The entered alphabet is 'e'";
          }
          else if (a == 'i')
          {
               cout << "The entered alphabet is 'i'";
          }
          else if (a == 'o')
          {
               cout << "The entered alphabet is 'o'";
          }
          else
          {
               cout << "The entered alphabet is 'u'";
          }
     }
     else
     {
          cout << "The alphabet is a consonant"<<endl;
          cout << "The entered alphabet is "<<a<<endl;
     }
     return 0;
}
