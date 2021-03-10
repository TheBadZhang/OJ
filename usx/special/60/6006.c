#include <stdio.h>

int main () {

	int i, c = 0;
	for (i = 1; i <= 100; ++i) {
		if (i%2 == 0) {
			c += i;
		}
	}
	printf ("%d\n", c);

	return 0;
}