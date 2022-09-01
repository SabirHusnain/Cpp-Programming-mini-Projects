#include <iostream>

using namespace std;

void add(int a, int b)
{
     int c = a + b;
     cout << c <<endl;
}

int main()
{
     int num1, num2;
     cout << "Enter two numbers:-" << endl;
     cin >> num1 >> num2;
     add(num1, num2);
     return 0;
}