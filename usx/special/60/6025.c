#include <stdio.h>

int main () {

	int m, a, b, c;
	for (m = 100; m < 1000; ++m) {
		a = m / 100;
		b = m / 10 % 10;
		c = m % 10;
		if (m == a*a*a + b*b*b + c*c*c) {
			printf ("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n",
				m, a, a, a, b, b, b, c, c, c);
		}
	}

	return 0;
}
