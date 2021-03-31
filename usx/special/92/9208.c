#include <stdio.h>

int main () {

	int a, sum;
	while (~scanf ("%d", &a)) {
		sum = 0;
		while (a > 0) {
			sum += (a%10)*(a%10);
			a /= 10;
		}
		printf ("%d\n", sum);
	}


	return 0;
}