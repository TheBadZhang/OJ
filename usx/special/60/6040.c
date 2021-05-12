#include <stdio.h>
#include <math.h>

int isPrime (int n) {
	int i;
	for (i = 3; i <= sqrt (n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main () {

	int n, i = 2;
	int sushu[300] = { 2, 3 };
	for (n = 1; n < 40; n ++) {
		if (isPrime (n*6-1)) sushu[i++] = n*6-1;
		if (isPrime (n*6+1)) sushu [i++] = n*6+1;
	}

	while (~scanf ("%d", &n)) {
		i = 1;
		if (n>=2) {
			printf ("2");
		}
		while (sushu[i++] <= n) {
			printf (" %d", sushu[i-1]);
		}
		printf ("\n");
	}

	return 0;
}