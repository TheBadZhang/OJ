#include <stdio.h>


int main () {

	int n, a, i, s, aa;
	while (~scanf ("%d %d", &n, &a)) {
		s = 0;
		aa = 0;
		for (i=0; i < n; i++) {
			aa = aa*10+a;
			s += aa;
		}
		printf ("%d\n", s);
	}

	return 0;
}