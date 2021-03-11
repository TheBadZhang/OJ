#include <stdio.h>

int main () {

	int n, a, b, t;
	double s = 0.0;
	double ar [22];
	for (a = 2, b = 1, n = 0; n<20;++n) {
		s += (double)a/(double)b;
		ar [n] = s;
		t = a;
		a += b;
		b = t;
	}
	while (~scanf("%d", &n)) {
		printf ("%.6lf\n", ar[n-1]);
	}

	return 0;
}