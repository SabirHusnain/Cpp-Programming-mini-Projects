#include <iostream>

using namespace std;

void add(float a, float b, float c, float d, float e)
{
     float f = a + b + c + d + e;
     cout <<"Sum is: "<< f << endl;
}

int main()
{
     float num1, num2, num3, num4, num5;
     cout << "Enter five numbers:-" << endl;
     cin >> num1 >> num2 >> num3 >> num4 >> num5;
     add(num1, num2, num3, num4, num5);
     return 0;
}
