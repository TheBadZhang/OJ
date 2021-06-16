#include <stdio.h>
#include <math.h>

int isPrime (int n) {
	if (n == 2) return 1;
	if (n&1) {
		int i;
		for (i = 3; i <= sqrt (n); i++) {
			if (n % i == 0) return 0;
		}
		return 1;
	} else return 0;
}

int main () {

	int n;
	while (~scanf ("%d", &n)) {
		int i = 2;
		int flag = 0;
		printf ("%d=",n);
		while (n/i>1) {
			// printf ("%d %d\n", n, i);
			if (isPrime (n)) {
				if (flag) printf ("*");
				printf ("%d", n);
				i = n;
			} else {
				if (isPrime (i) && n%i == 0) {
					if (flag) printf ("*");
					printf ("%d", i);
					flag = 1;
					n /= i;
				} else {
					i ++;
				}
			}
		}
		printf ("\n");
	}

}