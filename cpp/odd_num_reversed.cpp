#include <iostream>
using namespace std;

// a function to print odd numbers from 1 to 99 in reverse order.

int main( int argc, char ** argv) {
	int n = 100;
	for (int i = 0; i< 50; ++i) {
		std::cout << n - (2*i+1) << std::endl;
	}
}



