#include <stdio.h>

int main () {

	unsigned int N [60] = { 1, 1, 1 };
	int i;
	for (i = 3; i < 30; i++) {
		N [i] = N [i-1] + N [i-3];
	}
	while (~scanf("%d", &i)) {
		printf ("%d\n", N[i-1]);
	}

	return 0;
}