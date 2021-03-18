#include <stdio.h>

int main () {

	const double pi = 3.14159;
	double r;

	scanf ("%lf", &r);

	printf ("%.2lf\n", 2*pi*r);
	printf ("%.2lf\n", pi*r*r);

	return 0;
}