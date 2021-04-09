#include <stdio.h>
#include <math.h>

double f (double x) {
	return 2*x*x*x-4*x*x+3*x-7;
}

double df (double x) {
	return 6*x*x-8*x+3;
}

int main () {

	double x = 1.5;
	while (fabs(f(x)) >= 1e-5) {
		x = x - f(x)/df(x);
	}
	printf ("%.6lf\n", x);

	return 0;
}