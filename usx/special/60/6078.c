#include <stdio.h>
#include <math.h>

int isPrime (int n) {
	int i;
	if (!n&1) return 0;
	for (i = 3; i <= sqrt (n); i+=2) {
		if (n%i == 0) return 0;
	}
	return 1;
}

int main () {

	int n;
	while (~scanf ("%d", &n)) {
		if (isPrime (n)) {
			printf ("YES\n");
		} else {
			printf ("NO\n");
		}
	}
	return 0;
}