#include <stdio.h>

int main () {

	int a, b;
	while (~scanf ("%d %d", &a, &b)) {
		if (a > b) {
			printf ("%d\n", a*a);
		} else {
			printf ("%d\n", b*b);
		}
	}


	return 0;
}