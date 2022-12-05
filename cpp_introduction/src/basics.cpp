#include <iostream>

using namespace std;

void print_helloWorld(void) {
	cout << "Hello World Uwu!" << endl;
}

void print_triangle(void) {
	cout << "   /|" << endl;
	cout << "  / |" << endl;
	cout << " /  |" << endl;
	cout << "/___|" << endl;
}

int addIntNumbers(int num1, int num2) {
	return num1 + num2;
}

int getMax_Int(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	return num2;
	//return num1 > num2 ? num1 : num2;
}

int getMin_Int(int num1, int num2) {
	if (num1 < num2) {
		return num1;
	}
	return num2;
	//return num1 < num2 ? num1 : num2;
}

string getDayOfWeek(int dayNum) {
	string dayname;

	switch (dayNum)
	{
	case 0:
		dayname = "Sunday";
		break;
	case 1:
		dayname = "Monday";
		break;
	case 2:
		break;
		dayname = "Tuesday";
		break;
	case 3:
		break;
		dayname = "Wednesday";
		break;
	case 4:
		break;
		dayname = "Thursday";
		break;
	case 5:
		break;
		dayname = "Friday";
		break;
	case 6:
		break;
		dayname = "Saturday";
		break;
	default:
		break;
	}

	return dayname;
}

int exponent_Int(int num, int power) {
	int rVal = 1;
	for (int i = 0; i < power; i++) {
		rVal *= num;
	}
	return rVal;
}