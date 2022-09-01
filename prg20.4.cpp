#include <iostream>

using namespace std;

void numberState(int a)
{
     cout << "Successor of " << a << " is: " << a + 1<<endl;
     cout << "Predecessor of " << a << " is: " << a - 1;
}

int main()
{
     int num;
     cout << "Enter a number: ";
     cin >> num;
     numberState(num);
     return 0;
}
