#include <stdio.h>
#include <math.h>
int N;
double f (int n, double x, double z) {
	double y;
	if (n >= N) return 0.0;
	if (n > 0) z = z * x * x / (2*n) / (2*n+1);
	else z = x;
	if (n&1) {
		y = -z+f(n+1, x, z);
	} else {
		y = z+f(n+1, x, z);
	}
	// printf ("%d %lf %lf %lf\n", n, x, z, y);
	return y;
}

int main () {

	double x;

	while (~scanf ("%d %lf", &N, &x)) {
		printf ("%.3lf\n", f(0,x,1.0));
	}


	return 0;
}