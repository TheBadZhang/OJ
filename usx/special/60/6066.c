#include <stdio.h>

double P (double x, int n) {
	if (n == 0) return 1.0;
	else if (n == 1) return x;
	else if (n > 1) return ((2*n-1)*x-P(x,n-1)-(n-1)*P(x,n-2))/(double)n;
}

int main () {
	double x;
	int n;
	while (~scanf ("%d %lf", &n, &x)) {
		printf ("%.6lf\n", P(x,n));
	}

	return 0;
}