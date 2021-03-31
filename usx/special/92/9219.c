#include <stdio.h>
#include <math.h>

int main () {

	int m, n, i, flag, a, b, c;
	while (~scanf ("%d %d", &m, &n)) {
		flag = 0;
		for (i = m; i <= n; i++) {
			a = i/100; b = (i/10)%10; c = i%10;
			if (i == a*a*a+b*b*b+c*c*c) {
				flag = 1;
				printf ("%d,", i);
			}
		}
		if (!flag) {
			printf ("no");
		}
		printf ("\n");
	}

	return 0;
}