#include <stdio.h>
#include <math.h>

int main () {

	double a, b, c, delta;
	while (~scanf ("%lf %lf %lf", &a, &b, &c)) {
		delta = b*b-4*a*c;
		if (delta == 0.0) {
			printf ("%.2f\n", -b/2/a);
		} else if (delta > 0) {
			delta = sqrt(delta);
			printf ("%.2f %.2f\n", (-b+delta)/2/a, (-b-delta)/2/a);
		} else {
			printf ("No answer\n");
		}
	}



	return 0;
}