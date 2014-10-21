#include <stdlib.h>
#include <stdio.h>
#include "fraction.h"

int main(int argc, char* argv[]) {
	int N;
	if (argc > 1 && atoi(argv[1]) > 0) {
		N = atoi(argv[1]);

		fraction f = {1,2};

		fraction* arr;
		arr = (fraction*) malloc(sizeof(fraction) * N);
		int i;
		for (i = 0 ; i < N ; ++i) {
			arr[i].up = 1;
			arr[i].down = (i+1) * (i+2);
		}

		fraction sum = fraction_sum(arr, N);
		fraction_reduce(&sum);
		print_fraction(sum);
		printf("%f\n", fraction2double(sum));

		free(arr);
		printf("0x%x\n", arr);
		arr = (fraction*) malloc(sizeof(fraction) * N);
		printf("0x%x\n", arr);
		arr = (fraction*) malloc(sizeof(fraction) * N);
		printf("0x%x\n", arr);
		
	} else {
		printf("Argument 1 should be a non-negative integer!\n");
	}
}