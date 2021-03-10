#include <stdio.h>
#include <math.h>

int main () {

	int a, b;
	while (~scanf ("%d %d", &a, &b)) {
		printf ("%d\n", a+abs(b));
	}

	return 0;
}