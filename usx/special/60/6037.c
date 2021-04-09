#include <stdio.h>

int main () {

	double max, min, t;
	int n, i;
	while (~scanf ("%d", &n)) {
		scanf ("%lf", &t);
		max = min = t;
		for (i = 1; i < n; i++) {
			scanf ("%lf", &t);
			if (t > max) {
				max = t;
			}
			if (t < min) {
				min = t;
			}
		}
		printf ("%.6lf %.6lf\n", max, min);
	}

	return 0;
}