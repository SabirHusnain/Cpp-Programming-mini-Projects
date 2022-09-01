#include <iostream>
#include <graphics.h>

using namespace std;

/*
A program that can print line entered by user in Graphics format
user can enter a text between 1-500 word of CAPITAL letters it
will analyze the string entered and call the correspoding character's
function thus character will be there.
*/

int temp; // A global variable can be called by any function of program

// Function of Character 'A'
void A(int x, int xW, int y, int yW)
{
	temp = xW / 2;
	line(x, y + temp, x, y + yW);
	arc(x + temp, y + temp, 0, 180, temp);
	line(x + xW, y + temp, x + xW, y + yW);
	line(x, y + (yW / 2), x + xW, y + (yW / 2));
}

// Function of Character 'B'
void B(int x, int xW, int y, int yW)
{
	temp = yW / 4;
	line(x, y, x, y + yW);
	line(x, y, x + (xW - temp), y);
	line(x, y + yW / 2, x + (xW - temp), y + yW / 2);
	line(x, y + yW, x + (xW - temp), y + yW);
	arc(x + xW - temp, y + temp, 270, 90, temp);
	arc(x + xW - temp, y + yW - temp, 270, 90, temp);
}

// Function of Character 'C'
void C(int x, int xW, int y, int yW)
{
	temp = yW / 2;
	line(x + temp, y, x + xW, y);
	arc(x + temp, y + temp, 90, 270, temp);
	line(x + temp, y + yW, x + xW, y + yW);
}

// Function of Character 'D'
void D(int x, int xW, int y, int yW)
{
	temp = yW / 2;
	line(x, y, x, y + yW);
	line(x, y, x + xW - temp, y);
	arc(x + xW - temp, y + temp, 270, 90, temp);
	line(x, y + yW, x + xW - temp, y + yW);
}

// Function of Character 'E'
void E(int x, int xW, int y, int yW)
{
	temp = yW / 2;
	line(x, y, x, y + yW);
	line(x, y, x + xW, y);
	line(x, y + temp, x + xW, y + temp);
	line(x, y + yW, x + xW, y + yW);
}

// Function of Character 'F'
void F(int x, int xW, int y, int yW)
{
	temp = yW / 2;
	line(x, y, x, y + yW);
	line(x, y, x + xW, y);
	line(x, y + temp, x + xW, y + temp);
}

// Function of Character 'G'
void G(int x, int xW, int y, int yW)
{
	temp = yW / 2;
	line(x + temp, y, x + xW, y);
	arc(x + temp, y + temp, 90, 270, temp);
	line(x + temp, y + yW, x + xW, y + yW);
	line(x + xW, y + yW, x + xW, y + yW - (temp / 2));
	line(x + xW, y + yW - (temp / 2), x + xW - (temp / 2), y + yW - (temp / 2));
}

// Function of Character 'H'
void H(int x, int xW, int y, int yW)
{
	temp = yW / 2;
	line(x, y, x, y + yW);
	line(x + xW, y, x + xW, y + yW);
	line(x, y + temp, x + xW, y + temp);
}

// Function of Character 'I'
void I(int x, int xW, int y, int yW)
{
	temp = xW / 2;
	line(x, y, x + xW, y);
	line(x, y + yW, x + xW, y + yW);
	line(x + temp, y, x + temp, y + yW);
}

// Function of Character 'J'
void J(int x, int xW, int y, int yW)
{
	temp = xW / 2;
	line(x, y, x + xW, y);
	line(x + temp, y, x + temp, y + yW - (yW / 4));
	arc(x + temp / 2, y + yW - (yW / 4), 180, 0, temp / 2);
}

// Function of Character 'K'
void K(int x, int xW, int y, int yW)
{
	temp = yW / 2;
	line(x, y, x, y + yW);
	line(x, y + temp, x + xW, y);
	line(x, y + temp, x + xW, y + yW);
}

// Function of Character 'L'
void L(int x, int xW, int y, int yW)
{
	temp = yW / 4;
	line(x, y, x, y + yW);
	line(x, y + yW, x + xW, y + yW);
}

// Function of Character 'M'
void M(int x, int xW, int y, int yW)
{
	line(x, y, x, y + yW);
	line(x, y, x + xW / 2, y + yW / 2);
	line(x + xW / 2, y + yW / 2, x + xW, y);
	line(x + xW, y, x + xW, y + yW);
}

// Function of Character 'N'
void N(int x, int xW, int y, int yW)
{
	line(x, y, x, y + yW);
	line(x, y, x + xW, y + yW);
	line(x + xW, y, x + xW, y + yW);
}

// Function of Character 'O'
void O(int x, int xW, int y, int yW)
{
	temp = xW / 2;
	arc(x + temp, y + temp, 0, 180, temp);
	line(x, y + temp, x, y + yW - temp);
	line(x + xW, y + temp, x + xW, y + yW - temp);
	arc(x + temp, y + yW - temp, 180, 0, temp);
}

// Function of Character 'P'
void P(int x, int xW, int y, int yW)
{
	temp = yW / 4;
	line(x, y, x, y + yW);
	line(x, y, x + (xW - temp), y);
	line(x, y + yW / 2, x + (xW - temp), y + yW / 2);
	arc(x + xW - temp, y + temp, 270, 90, temp);
}

// Function of Character 'Q'
void Q(int x, int xW, int y, int yW)
{
	temp = xW / 2;
	arc(x + temp, y + temp, 0, 180, temp);
	line(x, y + temp, x, y + yW - temp);
	line(x + xW, y + temp, x + xW, y + yW - temp);
	arc(x + temp, y + yW - temp, 180, 0, temp);
	line(x + xW - temp / 2, y + yW - temp / 2, x + xW, y + yW);
}

// Function of Character 'R'
void R(int x, int xW, int y, int yW)
{
	temp = yW / 4;
	line(x, y, x, y + yW);
	line(x, y, x + (xW - temp), y);
	line(x, y + yW / 2, x + (xW - temp), y + yW / 2);
	arc(x + xW - temp, y + temp, 270, 90, temp);
	line(x + xW - temp, y + yW / 2, x + xW, y + yW);
}

// Function of Character 'S'
void S(int x, int xW, int y, int yW)
{
	temp = yW / 4;
	line(x + temp, y, x + xW, y);
	arc(x + temp, y + temp, 90, 270, temp);
	line(x + temp, y + yW / 2, x + xW - temp, y + yW / 2);
	arc(x + xW - temp, y + yW - temp, 270, 90, temp);
	line(x, y + yW, x + xW - temp, y + yW);
}

// Function of Character 'T'
void T(int x, int xW, int y, int yW)
{
	temp = xW / 2;
	line(x, y, x + xW, y);
	line(x + temp, y, x + temp, y + yW);
}

// Function of Character 'U'
void U(int x, int xW, int y, int yW)
{
	temp = xW / 2;
	line(x, y, x, y + yW - temp);
	line(x + xW, y, x + xW, y + yW - temp);
	arc(x + temp, y + yW - temp, 180, 0, temp);
}

// Function of Character 'V'
void V(int x, int xW, int y, int yW)
{
	temp = xW / 2;
	line(x, y, x + temp, y + yW);
	line(x + temp, y + yW, x + xW, y);
}

// Function of Character 'W'
void W(int x, int xW, int y, int yW)
{
	line(x, y, x, y + yW);
	line(x, y + yW, x + xW / 2, y + yW / 2);
	line(x + xW / 2, y + yW / 2, x + xW, y + yW);
	line(x + xW, y, x + xW, y + yW);
}

// Function of Character 'X'
void X(int x, int xW, int y, int yW)
{
	line(x, y, x + xW, y + yW);
	line(x, y + yW, x + xW, y);
}

// Function of Character 'Y'
void Y(int x, int xW, int y, int yW)
{
	temp = yW / 2;
	line(x + xW / 2, y + temp, x + xW / 2, y + yW);
	line(x + xW / 2, y + temp, x, y);
	line(x + xW / 2, y + temp, x + xW, y);
}

// Function of Character 'Z'
void Z(int x, int xW, int y, int yW)
{
	line(x, y, x + xW, y);
	line(x + xW, y, x, y + yW);
	line(x, y + yW, x + xW, y + yW);
}

int main()
{
	int xStart = 30, xWidth;
	int yStart = 30, yWidth;
	int xSpace, ySpace;

	/*
	Variables Characteristics: -
		xStart	:	Starting value of character in x-axis
		xWidth	:	Size with respect to x-axis
		yStart	:	Starting value of character in y-axis
		yWidth	:	Size with respect to y-axis
		xSpace	:	Space with respect to x-axis
		ySpace	:	Space with respect to y-axis
	*/

	char a[100]; // Stores the string entered by user
	cout << "Enter a sentence: ";
	cin.getline(a, 100);
	cout << "Enter the size of letters (10-200): ";
	cin >> yWidth;

	// Calculations are calibrated with respect to yWidth=100

	xWidth = (yWidth * 64) / 100;
	xSpace = yWidth / 10;
	ySpace = yWidth / 5;
	int j = 0;
	cout<<xStart<<" "<<xWidth<<" "<<xSpace<<endl
<<yStart<<" "<<yWidth<<" "<<ySpace<<endl;
	initwindow(1300, 700);
	while (a[j] != '\0')
	{
		// Using switch to call functions
		switch (a[j])
		{
		case 'A':
			A(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'B':
			B(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'C':
			C(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'D':
			D(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'E':
			E(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'F':
			F(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;
		case 'G':
			G(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'H':
			H(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'I':
			I(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;
		case 'J':
			J(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'K':
			K(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'L':
			L(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;
		case 'M':
			M(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'N':
			N(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'O':
			O(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;
		case 'P':
			P(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'Q':
			Q(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'R':
			R(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;
		case 'S':
			S(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'T':
			T(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'U':
			U(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;
		case 'V':
			V(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'W':
			W(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'X':
			X(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;
		case 'Y':
			Y(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;

		case 'Z':
			Z(xStart, xWidth, yStart, yWidth);
			xStart += xSpace + xWidth; // Updating next word's start
			break;
		default:
			xStart += xSpace + xWidth; // A xSpace, if no match
		}

		j++;
		// Initializing a new line if one ends and xStart meets maximum limit
		if (xStart >= 1270)
		{
			yStart = yStart + ySpace + yWidth; // Updating yStart
			xStart = 50; // Initialiaing xStart to '0' again
		}
	}
	getch();
	return 0;
}
