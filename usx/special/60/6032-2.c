#include <stdio.h>
#include <math.h>

int main () {

	int n, i, j;
	while (~scanf ("%d", &n)) {
		for (i = 0; i < 2*n-1; printf ("\n"),i++) {
			for (j = 0; j++ < 2*abs((n-i-1)); printf (" "));
			for (printf ("*"),j = 0; j++ < 2*(n-1-abs(n-1-i)); printf (" *"));
		}
	}

	return 0;
}