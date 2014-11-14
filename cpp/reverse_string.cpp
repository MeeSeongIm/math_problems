
#include <iostream>
using namespace std;


void print(char *s) {
	if (*s !=0) {
		putchar(*s);
		cout << s+1;
	}
}

void printreverse(char *s) {
	if (*s !=0) {
		printreverse(s+1);
		putchar(*s);
	}
}


int main() {
	char *s = "this is a string.";
	cout << s << endl;
	printreverse(s);
	return 0;
}




