/*
Name: Sabir Husnain
Reg No. 2019-MC-263
Section: A
*/

#include <iostream>
#include <conio.h>
#include <graphics.h>

using namespace std;

/*
     A program that will display "HUSNAIN" on the screen using graphics and
user enters the resolution of screen if one enters 0, 0 as resolution then
concept of "Default Function Arguments" will be used and it will initialize
a windows of resolution "1280 x 720" which is a standard 720p resolution screen.
     If user enter some parameters regarding screen resolution then it will
initialize that type of windows o the screen.
*/

// Function

void WriteMyName(const int rWidth = 1280, const int rHeight = 720)
{
/*
	     Default arguments for WriteMyName function are used which are screen
	resolution parameters
*/
	
	const int vStart = (250 * rHeight) / 768, vWidth = (200 * rHeight) / 768;
	const int hWidth = (150 * rWidth) / 1366, space = (20 * rWidth) / 1366;
	int hStart = (65 * rWidth) / 1366;

	// All the above parameters are calibrated and calculated manually, then 
	// an self-defined algorithim was applied for automatic calculations
	
/*
	Variables Characteristics:-
	
	vStart (Vertical Start):   Starting of a fonts in y-axis
	vWidth (Vertical Width):   Width of Height of fonts in y-axis
	hStart (Horizontal Start): Starting of font in x-axis
	hWidth (Horizontal Width): Width of fonts in x-axis
	space:                     Space between two fonts
*/
	
	initwindow(rWidth, rHeight, "2019 MC 263", 0, 0);

	// H
	int temp = vWidth / 2; // Middle line starting
	line(hStart, vStart, hStart, vStart + vWidth); // Left line
	line(hStart, vStart + temp, hStart + hWidth, vStart + temp); // Middle Line
	line(hStart + hWidth, vStart, hStart + hWidth, vStart + vWidth); // Right line

	hStart += hWidth + space; // Updating next font's start

	// U
	temp = hWidth / 2; // Arc radius
	line(hStart, vStart, hStart, vStart + vWidth - temp); // Left line
	arc(hStart + temp, vStart + vWidth - temp, 180, 0, temp); // Arc
	line(hStart + hWidth, vStart, hStart + hWidth, vStart + vWidth - temp); // Right line

	hStart += hWidth + space; // Updating next font's start

	// S
	temp = vWidth / 4; // Arc radius
	line(hStart + temp, vStart, hStart + hWidth, vStart); // Top most line
	arc(hStart + temp, vStart + temp, 90, 270, temp); // Top arc
	// Middel line
	line(hStart + temp, vStart + (temp * 2), hStart + hWidth - temp, vStart + (temp * 2));
	arc(hStart + hWidth - temp, vStart + vWidth - temp, 270, 90, temp); // Bottom arc
	// Bottom most line
	line(hStart, vStart + vWidth, hStart + hWidth - temp, vStart + vWidth);

	hStart += hWidth + space; // Updating  next font's start

	// N
	line(hStart, vStart, hStart, vStart + vWidth); // Left most line
	line(hStart, vStart, hStart + hWidth, vStart + vWidth); // Diagonal
	line(hStart + hWidth, vStart, hStart + hWidth, vStart + vWidth); // Right most line

	hStart += hWidth + space; // Updating  next font's start

	// A
	temp = hWidth / 2; // Arc radius
	line(hStart, vStart + temp, hStart, vStart + vWidth); // Left line
	arc(hStart + temp, vStart + temp, 0, 180, temp); // Arc
	// Right line
	line(hStart + hWidth, vStart + temp, hStart + hWidth, vStart + vWidth);
	// Middle line
	line(hStart, vStart + (vWidth / 2), hStart + hWidth, vStart + (vWidth / 2));

	hStart += hWidth + space; // Updating  next font's start

	// I
	line(hStart, vStart, hStart + hWidth, vStart); // Top line
	// Horizontal line
	line(hStart + (hWidth / 2), vStart, hStart + (hWidth / 2), vStart + vWidth);
	line(hStart, vStart + vWidth, hStart + hWidth, vStart + vWidth); // Bottom line

	hStart += hWidth + space; // Updating  next font's start

	// N
	line(hStart, vStart, hStart, vStart + vWidth); // Left most line
	line(hStart, vStart, hStart + hWidth, vStart + vWidth); // Diagonal
	// Right most line
	line(hStart + hWidth, vStart, hStart + hWidth, vStart + vWidth);
}

int main()
{
	int rW = 0, rH = 0;
	char c;
	cout << "Enter Screen Resolution (Width*Height)" << endl
		<< "0*0 for default values:-" << endl 
		<< "Your Choice: ";
	cin >> rW >> c >> rH;

	if (rW == 0 || rH == 0)
	{
		WriteMyName(); // Calling Function with default arguments
	}
	else
	{
		WriteMyName(rW, rH); // Calling Function with user-defined arguments
	}
	getch();
	return 0;
}
