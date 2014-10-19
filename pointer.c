#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int a = 123;
	int b = 456;
	int c = 789;
	printf("0x%x\n0x%x\n0x%x\n", &a, &b, &c);
	// heap or stack memory?
	printf("------------------\n");

	int* d = (int*) malloc(sizeof(int));
	*d = 10;
	int* e = (int*) malloc(sizeof(int));
	*e = 20;
	int* f = (int*) malloc(sizeof(int));
	*f = 30;
	// what if there is no '*', ex: f = 30 happen?

	printf("0x%x\n0x%x\n0x%x\n", &d, &e, &f);
	// heap or stack
	printf("0x%x\n0x%x\n0x%x\n", d, e, f);
	// heap or stack
	printf("%d\n%d\n%d\n", *d, *e, *f);
	// store in heap or stack memory?

	printf("------------------\n");
	printf("%d\n", *((&a)+1));
	printf("%d\n", *((&a)-1));
	// why -1 works but +1 not?
	// the priority of *, &, +-*/, ++/-- ...

	printf("------------------\n");

	printf("%d\n", *(d+sizeof(int)));
	printf("%d\n", *(d+sizeof(int*)));
	// why one is 20 and the other is 30?

	printf("------------------\n");
	printf("0x%x\n", &d-1);
	printf("%d\n", *(&d-1));
	printf("%d\n", **(&d-1));
	// why we need '**'?

	// what the differences between the values of d, *d, &d?
}