#include <stdio.h>

int main () {

	int T, n, i;
	scanf ("%d", &T);
	while (T--) {
		scanf ("%d", &n);
		for (i = 1; i <= n; i++) {
			if (n%i == 0) {
				if (i != 1) printf (" ");
				printf ("%d", i);
			}
		}
		printf ("\n");
	}

	return 0;
}