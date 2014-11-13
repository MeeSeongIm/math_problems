#include <cstdlib>
#include <ctime>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// computes the max, min, and the average of a list with random numbers.

bool fn(int i, int j) {
	return i<j;
}

struct my_class {
	bool operator() (int i, int j) {
		return i < j;
	}
} my_object;


int main() {
	srand(time(NULL));

	int my_array[] = {rand()%100, rand()%100, rand()%100, rand()%100, rand()%100};

	list<int> a (1, rand()%100);
	for (int i =0; i<5 ; ++i) {
		a.push_back(rand()%100);
	}

	cout << "a consists of: ";
	for (list<int>::iterator it = a.begin(); it!= a.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << endl;

	for (int i=0; i < 5; ++i) {
		cout << my_array[i] << " ";
	}

	cout << endl << endl;


	cout << "min: " << *min_element(my_array,my_array+5) << "\n";
	cout << "max: " << *max_element(my_array,my_array+5) << "\n";


	cout << "min using fn: "<< *min_element(my_array, my_array+5, fn) << "\n";
	cout << "max using fn: " << *max_element(my_array, my_array+5, fn) << "\n";

	cout << "min using my_object: " << *min_element(my_array, my_array+5, my_object) << "\n";
	cout << "max using my_object: " << *max_element(my_array, my_array+5, my_object) << "\n" << endl;

	int sum;
	int average;

	for (int i=0; i < 5; ++i) {
		sum += my_array[i];
	}

	cout << "sum is: " << sum << endl;
	average = sum/5;
	cout << "average is " << average << endl;

	return 0;
}



