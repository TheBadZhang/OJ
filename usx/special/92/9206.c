#include <stdio.h>

double f(double x) {
	if (x < 0) {
		return 0;
	} else if (x < 10) {
		return 2*x;
	} else if (x < 50) {
		return 2*x + 1;
	} else {
		return x/2.0+50;
	}
}

int main () {

	double x;
	while (~scanf ("%lf", &x)) {
		printf ("%.2lf\n", f(x));
	}


	return 0;
}