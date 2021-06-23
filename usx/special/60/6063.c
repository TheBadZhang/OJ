#include <stdio.h>
#include <math.h>

int main () {

	double a, b, c;
	while (~scanf ("%lf %lf %lf", &a, &b, &c)) {
		double delta = b*b - 4 * a * c;
		if (fabs(delta) < 1e-6) {
			printf ("x=%.6lf\n", -b/2/a);
		} else if (delta < 0) {
			printf ("x1=%.6lf%+.6lfi x2=%.6lf%-.6lfi\n",
				-b/2/a, sqrt(-delta)/2/a,-b/2/a,-sqrt(-delta)/2/a);
		} else {
			printf ("x1=%.6lf x2=%.6lf\n", (sqrt(delta)-b)/(2*a), (-sqrt(delta)-b)/(2*a));
		}
	}


	return 0;
}