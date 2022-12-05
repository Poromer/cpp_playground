using namespace std;

// Creating a Class (Part 20)
class Book {
public:
	string title;
	string author;
	int pages;
};

class Book_With_Constructor {
public:
	string title;
	string author;
	int pages;
	Book_With_Constructor() { // Able to have multiple constructors for different usecases
		title = "NA";
		author = "NA";
		pages = 0;
	}

	Book_With_Constructor(string _title, string _author, int _pages) {
		title = _title;
		author = _author;
		pages = _pages;
	}
};

class Student {
public:
	string name;
	string major;
	double gpa;
	Student(string _name, string _major, double _gpa) {
		name = _name;
		major = _major;
		gpa = _gpa;
	}

	bool hasHonors() { // Feels really weird to have a function in a header file though...
		if (gpa >= 3.5) {
			return true;
		}
		return false;
	}
};

class Movie {
private:
	string rating;

public: // all the stuff is public meaning all code outside the class can access the code
	string title;
	string director;
	Movie(string _title, string _director, string _rating) {
		title = _title;
		director = _director;
		setRating(_rating); // rating can be access still even when private as its within the class
	}

	void setRating(string _rating) {
		if (_rating == "G" || _rating == "PG" || _rating == "PG-13" || _rating == "M18" || _rating == "R21") {
			rating = _rating;
		}
		else {
			rating = "Invalid Rating";
		}

	}

	string getRating() {
		return rating;
	}
};

class Chef {
public:
	void makeChicken() {
		cout << "The chef makes chicken" << endl;
	}
	void makeSalad() {
		cout << "The chef makes salad" << endl;
	}
	void makeSpecialDish() {
		cout << "The chef makes special bbq ribs" << endl;
	}
};

class ItalianChef : public Chef {
public:
	void makePasta() {
		cout << "The chef makes pasta" << endl;
	}
	void makePizza() {
		cout << "The chef makes pizza" << endl;
	}
	void makeSpecialDish() { // Can override the previous function so in this case special dish changes from bbq ribs to chicken parm
		cout << "The chef makes special chicken parm" << endl;
	}
};


void print_helloWorld(void);
void print_triangle(void);
int addIntNumbers(int num1, int num2);
int getMax_Int(int num1, int num2);
int getMin_Int(int num1, int num2);
string getDayOfWeek(int dayNum);
int exponent_Int(int num, int power);