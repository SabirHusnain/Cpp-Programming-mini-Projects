#include <iostream>

using namespace std;

void add(float a, float b)
{
     float c = a + b;
     cout <<"Sum is: "<< c << endl;
}

int main()
{
     float num1, num2;
     cout << "Enter two numbers:-" << endl;
     cin >> num1 >> num2;
     add(num1, num2);
     return 0;
}
