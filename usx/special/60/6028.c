#include <stdio.h>

int main () {

	int n, N[22]={1}, i;
	for (i = 1; i <= 22; i++) {
		N[i] = (N[i-1]+1)*2;
	}
	while (~scanf("%d", &n)) {
		printf ("%d\n", N[n-1]);
	}

	return 0;
}