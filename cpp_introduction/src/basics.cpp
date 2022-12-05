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