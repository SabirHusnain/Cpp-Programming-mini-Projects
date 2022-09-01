#include <iostream>

using namespace std;

int sum(int a, int b)
{
     int c = a + b;
     return c;
}

int main()
{
     int num1, num2;
     cout << "Enter two numbers:-" << endl;
     cin >> num1 >> num2;
     int d = sum(num1, num2);
     cout << "Sum is: " << d << endl;
     return 0;
}