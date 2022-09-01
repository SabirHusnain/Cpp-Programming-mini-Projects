#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n, i = 1;
	bool dec = true;
	while (dec)
	{
		cout << "Enter a number (-1 to end): ";
		cin >> n;
		i++;
		if (n == -1)
			dec = false;
	}
	cout << "User entered " << i << " number" << endl;
	getch();
	return 0;
}