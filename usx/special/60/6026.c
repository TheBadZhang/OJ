#include <stdio.h>

int main () {

	int i, t, s;
	for (i = 2; i < 10000; ++i) {
		for (s = 0, t = 1; t < i; t++) {
			if (i%t == 0) {
				s += t;
			}
		}
		if (i == s) {
			printf ("%d its factors are ", i);
			printf ("1");
			for (s = 0, t = 2; t < i; t++) {
				if (i%t == 0) {
					printf (",%d", t);
				}
			}
			printf ("\n");
		}
	}

	return 0;
}