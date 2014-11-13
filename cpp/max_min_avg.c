#include <stdio.h>      // printf, NULL
#include <stdlib.h>		// srand, rand
#include <time.h>		// time

// computer generates 10 random integers and then returns the maximum, minimum, and the average.

int max_array(int a[], int num_elt) {
	int i, max = -32000;
	for (i =0; i < num_elt; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return (max);
}

int min_array(int a[], int num_elt) {
	int i, min= 32000;
	for (i=0; i< num_elt; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return (min);
}

int average_array(int a[], int num_elt) {
	int i;
	int sum = 0;
	int average = 0;
	for (i=0;i< num_elt; i++) {
		sum += a[i];
	}
	average = sum/num_elt;
	return (average);
}


void print_array_entries(int a[], int num_elt) {
	int i;
	for (i=0; i < num_elt; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	srand(time(NULL));
	int a[10] = {rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand()};
	int max;
	int min;
	int average;
	print_array_entries(a,10);

	max = max_array(a,10);
	printf("The max is %d.\n", max);

	min = min_array(a,10);
	printf("The min is %d.\n", min);

	average = average_array(a,10);
	printf("The average is %d.\n", average);

	return 0;
}




