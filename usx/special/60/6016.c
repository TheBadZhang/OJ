#include <stdio.h>

double e (double i) {
	double r = 2, s = 1;
	int d;
	for (d = 2; s >= i; d++) {
		s /= d;
		r += s;
	}
	return r;
}

int main () {

	double i;
	while (~scanf ("%lf", &i)) {
		printf ("%.18lf\n", e(i));
	}

	return 0;
}