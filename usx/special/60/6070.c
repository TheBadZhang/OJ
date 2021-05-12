#include <stdio.h>
#include <math.h>

int main () {

	int n, i;
	double a, b, c;
	scand ("%d", &n);
	for (i = 0; i < n; i ++) {
		scanf ("%lf %lf %lf", &a, &b, &c);
		printf ("%.2lf %.2lf %.2lf\n", sin(a), sqrt(b), log(c));
	}

	return 0;
}