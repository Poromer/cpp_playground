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


void print_helloWorld(void);
void print_triangle(void);
int addIntNumbers(int num1, int num2);
int getMax_Int(int num1, int num2);
int getMin_Int(int num1, int num2);
string getDayOfWeek(int dayNum);
int exponent_Int(int num, int power);