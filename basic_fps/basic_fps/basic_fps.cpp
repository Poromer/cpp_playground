// basic_fps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

#include <Windows.h>

int nScreenWidth = 120;
int nScreenHeight = 40;

float fPlayerX = 0.0f; // player x position
float fPLayerY = 0.0f; // y position
float fPlayerA = 0.0f; // angle player is facing

int nMapWidth = 16;
int nMapHeight = 16;

float fFOV = 3.14159 / 4.0;

int main()
{
	//Create Screen Buffer
	wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeight]; // < -- new operators allocates storage (think malloc)
	// Above allocates storage using the new operator than stores in the array and then assigns the first address in the array to *screen
	// screen is a wchar_t pointer, where wchar_t refers to "wide char" its basically a "long" char that is 2 bytes instead of 1 
	// and holds more characters as compare to a char where char can hold up to 256 characters, 
	// widechar can hold 65536 (which is 256*256) characters where values corresponds to UNICODE values

	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;
	// @questions: what is a HANDLE data type?, what does parameters does CreateConsoleScreenBuffer() and what does it do?, What does SetConsoleActiveScreenBuffer() do?, whats a DWORD datatype

	// Game Map
	wstring map;
	map += L"################"; // the reason for the L infront of the string is to specify that the char are "long" or in this case "wide" as in the w part of wstring
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"################";



	// Game Update Loop
	while (true) {
		// Potter Algorithm
		for (int x = 0; x < nScreenWidth; x++) {
			float fRayAngle = ();
		}

		// @questions: WriteConsoleOutputCharacter() what does this function do?
		screen[nScreenWidth * nScreenHeight - 1] - '\0';
		WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0,0 }, &dwBytesWritten);
		
	}





	
	return 0;
}
