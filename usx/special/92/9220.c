#include <stdio.h>

int main () {

	int n, c;
	while (~scanf ("%d", &n)) {
		c = 0;
		while (n>0) {
			if (n%10 == 4) c ++;
			n /= 10;
		}
		printf ("%d\n", c);
	}


	return 0;
}