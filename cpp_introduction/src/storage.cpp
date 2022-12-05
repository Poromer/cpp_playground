#include <iostream>
#include <cmath>
#include <string>

#include "basics.hpp"

using namespace std;

int main_() {

	// Part 1: Hello World & Printing a Shape
	cout << "Does \\n work? \nnext line" << endl; // @note: "endl" means "end line" and "cout" means "c out", endl prints outs a newline
	cout << endl;

	// Part 2: Assigning Variables & Playing with "cout" -> console out.
	string kappa_name = "Turd";
	int kappa_age = 9;
	int kappa_eatingRate = 2;
	int cucmber_count = 10;

	cout << "Old Ver: The 9 year old Kappa named Turd eats 10 cucumbers at a rate of 1 cucumbers a minute." << endl;
	cout << "New Ver: The " << kappa_age << " year old Kappa named " << kappa_name << " eats " << cucmber_count << " cucumbers at a rate of " << kappa_eatingRate << " cucumbers a minute. \n";
	cout << "New Ver: This means that " << kappa_name << " takes " << cucmber_count / kappa_eatingRate << " minutes to eat " << cucmber_count << " cucumbers\n";
	cout << endl;

	// Part 3: Looking at the key data types like char, string, int, double, bool
	char letterGrade = 'A';
	string studentName = "Monke";
	int studentAge = 1023;
	double studentGpa = 3.14;
	bool studentPass = false; // what does bool type print out as? -> true >> 1 and false >> 0
	cout << endl;

	//  Part 4: Intro to string functions like .length(), .find(), substr().
	string phrase = "Monke Wonky";
	cout << phrase << endl;
	cout << phrase << 2 << "\n";
	cout << phrase.length() << endl; // phrase.length() returns the number of char in the string 
	/*
	@note: cpp typically does have the null terminating char '\0' at the end of a string.
	   Though depending on your implementation of it there could be a null char like when
	   you call "temp.c_str()"
	   */
	phrase[0] = 'B';
	phrase[6] = 'B';
	cout << phrase << endl;
	cout << phrase.find("onke") << endl; // returns the position of the first char found else if returns a garbage value
	cout << phrase.find("x") << endl; // returns grabage value as x is not found in the string 
	cout << phrase.substr(6, 11) << " "; // returns the string from position 6 to 11 of string "phrase"
	string phraseSub;
	phraseSub = phrase.substr(0, 5);
	cout << phraseSub << endl;
	cout << endl;

	// Part 5: Playing with numbers
	int p5_num1 = 10;
	int count = 0;
	count++;
	p5_num1 += 30;
	cout << "num1: " << p5_num1 << endl;
	cout << "count: " << count << endl;
	cout << "(1+2) * 4 / 2 * (11%2) = " << (1 + 2) * 4 / 2 * (11 % 2) << endl;

	double doubleNum1 = 3.14;
	cout << "Int + Doubble: " << doubleNum1 + p5_num1 << endl; // will return a double instead of a int
	// though note that when divide 10/3 you will get back a int instead of double (refer to int division and float division)
	// int division applies when dividing between 2 ints whereas if theres a float or double in the eqn it becomes a float division

	//cmath functions
	cout << pow(6, 2) << endl;
	cout << floor(3.75) << endl;
	cout << round(3.75) << endl;
	cout << fmax(3, 10) << endl; // fmax() takes in 2 ints and returns the largest int, theres also fmin() for the smaller number

	// Part 6: Getting User Input
	int userAge;
	string userName;

	cout << "Enter your name: ";
	//cin >> userName; // If I enter in "Wei Jie" the only thing that is stored is "Wei" and the "Jie" is not passed in
	getline(cin, userName); // the solution to the above problem is to use the "getline()" function to get the entire line
	cout << "Enter your age: ";
	cin >> userAge;
	cout << userName << " you are " << userAge << " years old" << endl;

	// Part 7: Making a basic calculator
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << num1 + num2 << endl;

	// Part 8: Mad Libs (Text Replacement): (Sometimes Broken?)
	string color, pluralNoun, object;

	cout << "Enter a Color:";
	getline(cin, color);
	cout << "Enter a Plural Noun:";
	getline(cin, pluralNoun);
	cout << "Enter a Object:";
	getline(cin, object);

	cout << "Roses are " << color << endl;
	cout << pluralNoun << " are blue" << endl;
	cout << "I love " << object << endl;
	return 0;

	// Part 9: Arrays
	int arr_nums[20] = { 4, 2, 44, 123, 5, 63, 2 }; // able to store up to 20 values
	int arr_doubles[30];
	arr_doubles[0] = 3.1;

	cout << arr_nums[0] << endl;
	cout << arr_nums[0] + arr_nums[1] << endl;

	arr_nums[2] = 3;
	cout << arr_nums[2] << endl;

	// Part 10: Functions & Return Statement
	print_helloWorld();
	print_triangle();
	cout << addIntNumbers(10, 20) << endl;

	// Part 11: If Conditional Statements
	bool isMale = true;
	bool isTall = true;

	if (isMale && isTall) {
		cout << "You are a Male and tall" << endl;
	}
	else if (isMale && !isTall) {
		cout << "You are a Male but not tall" << endl;
	}
	else {
		cout << "You are not Male" << endl;
	}
	// Part 12 If Conditional Statements (Cont)
	cout << getMax_Int(1, 3) << endl;
	cout << getMin_Int(1, 3) << endl;

}