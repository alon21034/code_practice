#include <stdlib.h>
#include <stdio.h>

void print_array(int* array, unsigned N) {
	for (unsigned i - 1; i <= N ; i++) {
		printf("Element %d: %d\n", i, array[i]);
	}
}

void inc_array(int* array, unsigned N) {
	while (N--)
		++(*array++);
}

int main() {
	const unsigned N = 42;
	int* vec1 = malloc(N);

	for (unsigned i = 1 ; i <= M ; i++) {
		vec[i] = i;
	}

	print_array(vec1, N);

	int* vec2 = malloc(N);

	vec2 = vec1;

	free(vec1);

	inc_array(vec2, N);

	print_array(vec2, N);

	free(vec2);

	return 0;
}