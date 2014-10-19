#include <stdio.h>
#include <stdlib.h>
#include "fraction.h"

void print_fraction(fraction f) {
	printf("%d/%d\n",f.up,f.down);
}

fraction square_fraction(fraction input) {
	fraction frac = {input.up*input.up, input.down*input.down};
	return frac;
}

fraction square_fraction_inplace(fraction* input) {
	input->up *= input->up;
	input->down *= input->down;
	return *input;
}

double fraction2double(fraction frac) {
	return (double)frac.up/(double)frac.down;
}

fraction fraction_sum(fraction* arr, int len) {
	int i;
	fraction sum = {0,1};
	for (i = 0 ; i < len ; ++i) {
		sum = fraction_add(sum, arr[i]);
		fraction_reduce(&sum);
	}
	return sum;
}

fraction fraction_add(fraction f, fraction g) {
	fraction ret = {f.up * g.down + f.down * g.up, f.down * g.down};
	return ret;
}

void fraction_reduce(fraction* f) {
	int b = (f->up>f->down)?f->up:f->down;
	int s = (f->up>f->down)?f->down:f->up;

	while (s > 1) {
		int tmp = b;
		b = s;
		s = tmp % s; 
	}

	if (s == 0) {
		f->up /= b;
		f->down /= b;
	}
}