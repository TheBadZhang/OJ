#include <stdio.h>

int main () {

	int i, a, b;
	scanf ("%d", &i);
	while (i--) {
		scanf ("%d%d", &a, &b);
		printf ("%d\n", a+b);
	}

	return 0;
}