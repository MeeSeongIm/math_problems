#include <iostream>
using namespace std;


int main( int argc, char ** argv) {
	int a = 0;
	int b = 1;
	int c;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	for (int i =1; i< 50; ++i) {
		c = a + b;
		std::cout << c << std::endl;  // prints the first 50 Fibonacci numbers
		a = b;
		b = c;
	}
}


