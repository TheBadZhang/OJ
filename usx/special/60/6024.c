#include <stdio.h>

int main () {

	int n, i;
	double s;
	while (~scanf ("%d", &n)) {
		s = 0.0;
		for (i = 1; i <= n; ++i) {
			s += (double)i;
			s += (double)i*(double)i;
			s += 1.0/(double)i;
		}
		printf ("%.6lf\n", s);
	}

	return 0;
}