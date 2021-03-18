#include <stdio.h>

int main () {

	int a, c;
	double b, d;

	scanf ("%d%lf %d%lf", &a, &b, &c, &d);

	printf ("%.2lf %.2lf", b+c, a+d);

	return 0;
}