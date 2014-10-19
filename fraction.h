#ifndef __FRACTION_H
#define __FRACTION_H

typedef struct _fraction {
	int up;
	int down;
} fraction;

fraction square_fraction(fraction);
fraction square_fraction_inplace(fraction*);
double fraction2double(fraction);
void print_fraction(fraction);
fraction fraction_sum(fraction*, int);
fraction fraction_add(fraction, fraction);
void fraction_reduce(fraction*);

#endif