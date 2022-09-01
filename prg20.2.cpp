#include <iostream>

using namespace std;

void name(int a)
{
     for (int i = 0; i < a; i++)
     {
          cout << "Husnain" << endl;
     }
}

int main()
{
     int num;
     cout << "How many times you want to print your name: ";
     cin >> num;
     name(num);
     return 0;
}
