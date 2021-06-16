#include <stdio.h>

int main () {

	int n, i;
	double x;
	while (~scanf ("%d %lf", &n, &x)) {
		if (n > 15 || n < 0) printf ("-10000.000000\n");
		else {
			double hermite [20] = { 1 };
			hermite [1] = 2*x;
			for (i = 2; i <= n; i ++)
				hermite [i] = hermite[1]*hermite[i-1] - 2*(i-1)*hermite[i-2];
			printf ("%.6lf\n", hermite [n]);
		}
	}

	return 0;
}