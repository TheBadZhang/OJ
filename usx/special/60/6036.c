#include <stdio.h>

int main () {

	int fibo [50] = { 1, 1, 2, 3 };
	int i;
	for (i = 2; i < 50; i++) {
		fibo [i] = fibo [i-1] + fibo [i-2];
	}
	int n;
	while (~scanf ("%d", &n)) {
		for (i = 1; i <= n; i++) {
			// if (i%5 != 1) printf (" ");
			if (i%5!=1) printf (" ");
			printf ("%d", fibo [i-1]);
			if (i%5 == 0) printf ("\n");
		}
		if (n%5)
			printf ("\n");
	}


	return 0;
}