#include <stdlib.h>
#include <stdio.h>

void print_array(int* array, unsigned N) {
	for (unsigned i = 1; i <= N ; i++) {
		printf("Element %d: %d\n", i, array[i-1]);
	}
}

void inc_array(int* array, unsigned N) {
	while (N--) {
		++(*(array++));
	}
		
}

int main() {
	const unsigned N = 42;
	int* vec1 = (int*) malloc(N * sizeof(int));

	for (unsigned i = 1 ; i <= N ; i++) {
		vec1[i] = i;
	}

	print_array(vec1, N);

	int* vec2 = (int*) malloc(N * sizeof(int));

	//vec2 = vec1;
	for (unsigned i = 0 ; i < N ; i++) {
		vec2[i] = vec1[i];
	}

	free(vec1);

	inc_array(vec2, N);

	print_array(vec2, N);

	free(vec2);

	return 0;
}