/**
@author: Wei Jie
@file_name: main.cpp
@date: 5/12/22022
@brief: Learning the basics of C++ using "C++ Tutorial for Beginners" video on YouTube
@timestamp: 3:34:50 (Object Functions)
@link: https://www.youtube.com/watch?v=vLnPwxZdW4Y&list=PLWtGt_6jXhSW7cd9VVj-vUUBz0KlaLuFX&index=7&t=16s&ab_channel=freeCodeCamp.org
*/



#include <iostream>
#include <cmath>
#include <string>

#include "basics.hpp"

using namespace std;


int main() {

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

	// Part 13: Caculator Ver 2
	int p13_num1, p13_num2;
	char op;

	cout << "Enter the Operation: ";
	cin >> op;
	cout << "Enter Number 1: ";
	cin >> p13_num1;
	cout << "Enter Number 2: ";
	cin >> p13_num2;

	if (op == '+') {
		cout << p13_num1 + p13_num2 << endl;
	}
	else if (op == '-') {
		cout << p13_num1 - p13_num2 << endl;
	}
	else if (op == '*') {
		cout << p13_num1 * p13_num2 << endl;
	}
	else if (op == '/') {
		cout << p13_num1 / p13_num2 << endl;
	}
	else {
		cout << "Error" << endl;
	}

	// Part 14: Switch Statement
	cout << getDayOfWeek(1);

	// Part 15: While Loop
	int p15_count = 0;
	while (p15_count <= 12) {
		cout << p15_count << ": ";
		p15_count % 2 ? cout << "Odd\n" : cout << "Even\n";
		p15_count++;
	}

	// Part 16: Guessing Game
	int secretNum = 7;
	int guess;

	while (true) {
		cout << "Enter your guess: ";
		cin >> guess;
		if (guess == secretNum) {
			break;
		}
		else if (guess > secretNum) {
			cout << "Your number is higher then the secret number\n";
		}
		else {
			cout << "Your number is lower then the secret number\n";
		}
	}
	cout << "Correct!\n";

	// Part 17: For loop
	int p17_numArr[10] = { 1,523,42,654,12,51,77,21 };

	for (int i = 0; i < sizeof(p17_numArr) / sizeof(int); i++) { //sizeof(p17_numArr) / sizeof(int) gets the num of element in array
		cout << p17_numArr[i] << "\n";
	}

	// Part 18: Exponent Function
	cout << exponent_Int(2, 3);

	// Part 19: 2D Arrays & Nested Loops
	int numberGrid[4][2] = { {1,2},
							{2,4},
							{2,7},
							{9,}
	};

	for (int i = 0; i < 4; ++i) {
		for (int k = 0; k < 2; ++k) {
			cout << numberGrid[i][k];
			cout << " | ";
		}
		cout << "\n";
	}

	// Part 20: Pointers
	int p20_age = 19;
	double p20_gpa = 2.7;
	string p20_name = "Mike";

	cout << &p20_age << endl; // Printing out the memory address where value of p20_age is stored
	cout << *&p20_age << endl; // dereferencing the memory address to get the value

	double* pGpa = &p20_gpa; // double pointer
	cout << *pGpa << endl; // dereferencing the memory address to get the value

	// Part 21: Classes & Objects
	// Book Class defination is located at basics.hpp
	// @note: public vs private in classes? usecases?
	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;
	cout << book1.title << endl;

	// Part 22: Constructors
	Book_With_Constructor book2 = Book_With_Constructor("Hunger Games", "Someone", 264);
	cout << book2.title << endl;
	Book_With_Constructor book3;
	cout << book3.title << endl;

	// Part 23: Object Functions
	// Making use of class "Student" located at basics.hpp
	Student student1("Jim", "Businesss", 2.4);
	Student student2("Bean", "Military History", 5.0);
	cout << student2.hasHonors(); // Function is defined in the "Student" Class

	// Part 24: Getters & Setters
	// Making use of class "Movie" located at basics.hpp
	Movie kappa("The Kappas", "Boof Boss", "PG-13");
	//cout << kappa.rating; // Rating parameter cannot be access when its in private as this code is outside the class
	kappa.setRating("R21");
	cout << kappa.getRating() << endl;
	kappa.setRating("monkehehehehe");
	cout << kappa.getRating() << endl;

	// Part 25: Inheritance
	// Making use of class "Chef" & "ItalianChef" located at basics.hpp
	Chef chef;
	chef.makeChicken();
	chef.makeSpecialDish();
	ItalianChef italianChef;
	italianChef.makeSalad();
	italianChef.makePizza();
	italianChef.makeSpecialDish();

	return 0;
}