#include <iostream>
using namespace std;


int main( int argc, char ** argv) {
	for (int i =1; i< 10; ++i)
		for (int j =i; j < 10; ++j) {
			std::cout << i << " times " << j << " = " << i*j << std :: endl;
		}
}



