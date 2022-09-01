#include <graphics.h>
#include <iostream>

using namespace std;

/*
This is a car animation, A car displayed by using pixels and graphics
will move forward in +ve x-axis using loops
User defined the speed of car and an infinite loop initializes thus
when loop variable reaches to maximum then '0' is again assigned to it
using 'if' condition.s
*/

int main()
{
	int i = 0, speed;

	cout << "Enter Speed of car: ";
	cin >> speed;

	initwindow(1366, 768, "The Car");

	for (int i = 0; true; i += (speed / 10))
	{
		line(0, 500, 1366, 500);		  // Road
		line(50 + i, 450, 90 + i, 450); // Bottom 1
		arc(150 + i, 450, 0, 181, 60);
		line(210 + i, 450, 390 + i, 450); // Bottom 2
		arc(450 + i, 450, 0, 181, 60);
		line(510 + i, 450, 600 + i, 450); // Bottom 3
		line(600 + i, 450, 600 + i, 400); // Front Bumper
		line(600 + i, 400, 450 + i, 350); // Diagonal 1
		line(450 + i, 350, 350 + i, 250); // Front Glass
		line(350 + i, 250, 100 + i, 250); // Top
		line(100 + i, 250, 50 + i, 350);  // Diagonal 2
		line(50 + i, 350, 50 + i, 450);   // Back Side

		circle(150 + i, 450, 50); // Rear Wheel
		circle(150 + i, 450, 30);
		circle(450 + i, 450, 50); // Front Wheel
		circle(450 + i, 450, 30);

		// Rear Window
		line(55 + i, 350, 105 + i, 255);
		line(105 + i, 255, 225 + i, 255);
		line(225 + i, 255, 225 + i, 350);
		line(225 + i, 350, 55 + i, 350);

		// Front Window
		line(235 + i, 255, 345 + i, 255);
		line(345 + i, 255, 440 + i, 350);
		line(440 + i, 350, 235 + i, 350);
		line(235 + i, 350, 235 + i, 255);

		// Setting Colors
		setfillstyle(SOLID_FILL, YELLOW);
		floodfill(300 + i, 400, WHITE);
		setfillstyle(11, WHITE);
		floodfill(200 + i, 300, WHITE);
		setfillstyle(11, WHITE);
		floodfill(300 + i, 300, WHITE);
		setfillstyle(1, WHITE);
		floodfill(110 + i, 450, WHITE);
		setfillstyle(1, WHITE);
		floodfill(490 + i, 450, WHITE);

		// Condition for initializing i again from '0'
		if (i >= 1366)
		{
			i = 0;
		}

		// Time delay
		delay(60);
		cleardevice();
	}

	getch();
	return 0;
}
