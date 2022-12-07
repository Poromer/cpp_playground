#include<iostream>

// Assignment 2
void draw_tree(void) 
{
	std::cout << "    *" << std::endl;
	std::cout << "   ***" << std::endl;
	std::cout << "  *****" << std::endl;
	std::cout << " *******" << std::endl;
	std::cout << "*********" << std::endl;
	std::cout << "    #" << std::endl;
	std::cout << "    #" << std::endl;
	std::cout << "    #" << std::endl;
	std::cout << "    #" << std::endl;
}

// Assignment 2
void draw_animal(void) 
{
	std::cout << "  /\\     /\\" << std::endl;
	std::cout << " /  \\___/  \\" << std::endl;
	std::cout << "(           )    -------" << std::endl;
	std::cout << "(   '   '   )   / Hello  \\" << std::endl;
	std::cout << "(     _     )  <  Junior  |" << std::endl;
	std::cout << "(           )   \\ Coder! /" << std::endl;
	std::cout << " |         |     _______" << std::endl;
	std::cout << " |    |    |" << std::endl;
	std::cout << " |    |    |" << std::endl;
	std::cout << "(_____|_____)" << std::endl;
}

//Assiginment 3
void temp_converter(int tempF)
{
	double tempC, tempK;
	tempC = (tempF - 32.0) * 5 / 9;
	tempK = (tempF + 459.67) * 5 / 9;

	std::printf("Fahrenheit     Celsius        Kelvin  \n");
	std::cout << "---------------------------------------------" << std::endl;
	std::printf("%-15d%-15.2f%-15.2f\n",tempF,tempC,tempK);
}

//Assiginment 4
void decimal_to_roman(int value) 
{
	while (value > 0)
	{
		if (value >= 1000) { std::putchar('M'), value -= 1000; }
		if (value >= 900 && value < 1000) { std::putchar('C'), std::putchar('M'), value -= 900; }
		if (value >= 500 && value < 900) { std::putchar('D'), value -= 500; }
		if (value >= 400 && value < 500) { std::putchar('C'), std::putchar('D'), value -= 400; }
		if (value >= 100 && value < 400) { std::putchar('C'), value -= 100; }
		if (value >= 90 && value < 100) { std::putchar('X'), std::putchar('C'), value -= 90; }
		if (value >= 50 && value < 90) { std::putchar('L'), value -= 50; }
		if (value >= 40 && value < 50) { std::putchar('X'), std::putchar('L'), value -= 40; }
		if (value >= 10 && value < 40) { std::putchar('X'), value -= 10; }
		if (value >= 9 && value < 10) { std::putchar('I'), std::putchar('X'), value -= 9; }
		if (value >= 5 && value < 9) { std::putchar('V'), value -= 5; }
		if (value >= 4 && value < 5) { std::putchar('I'), std::putchar('V'), value -= 4; }
		if (value >= 1 && value < 4) { std::putchar('I'), value -= 1; }
	}
	printf("\n");
}

//Assiginment 5 @todo
double trapezoid_pi(int num_of_rects)
{
	return 0;
}

double montecarlo_pi(unsigned int seed, int num_of_trails) 
{
	return 0;
}

double leibniz_pi(int num_elements) 
{
	return 0;
}

//Assiginment 6
void reverse_array(int a[], int size) 
{
	int temp;
	for (int i = 0; i < size/2; ++i) {
		temp = *(a + i);
		*(a + i) = *(a + size - i);
		*(a + size - i) = temp;
	}
}

void add_arrays(int const a[], int const b[], int c[], int size)
{
	for (int i = 0; i < size; ++i) {
		*(c + i) = *(a + i) + *(b + i);
	}
}

void scalar_multiply(int a[], int size, int scale_factor) 
{
	for (int i = 0; i < size; ++i) {
		*(a + i) *= scale_factor;
	}
}

int dot_product(int const a[], int const b[], int size) 
{
	int dot_value = 0;
	for (int i = 0; i < size; ++i) {
		dot_value += *(a + i) * *(b + i);
	}
	return dot_value;
}

void cross_product(int const a[], int const b[], int c[]) 
{
	c[0] = a[1] * b[2] - a[2] * b[1];
	c[1] = -(a[0] * b[2] - a[2] * b[0]);
	c[2] = a[0] * b[1] - a[1] * b[0];
}

double length(int const a[], int size) {
	double len = 0;
	for (int i = 0; i < size; ++i) {
		len += *(a + i) * *(a + i);
	}
	return len/(len*len);
}