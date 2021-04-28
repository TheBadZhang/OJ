#include <stdio.h>
#include <math.h>

double f (double x) {
	return 2*x*x*x-4*x*x+3*x-7;
}

int main () {

	double l = -10.0, r = 10.0, m;
	while (fabs (r-l) >= 1e-5) {
		m = (l+r)/2.0;
		if (f(l) < 0.0 && f(r) > 0.0) {
			if (f(m) == 0.0) {
				l = r = m;
			} else if (f(m) < 0) {
				l = m;
			} else {
				r = m;
			}
		} else {
			if (f(m) == 0.0) {
				l = r = m;
			} else if (f(m) < 0) {
				r = m;
			} else {
				l = m;
			}
		}
	}
	printf ("%.6lf %.6lf\n", l, r);


	return 0;
}