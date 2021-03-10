#include <stdio.h>
#include <math.h>

char isPrim (int a) {
	if (a&1) {
		int i;
		for (i = 3; i <= sqrt (a); ++i) {
			if (a%i == 0) {
				return 0;
			}
		}
		return 1;
	} else {
		return 0;
	}
}

int main () {

	int n;
	for (n = -39; n <= 40; ++n) {
		if (!isPrim(n*n-n+41)) {
			printf ("NO\n");
			return 0;
		}
	}
	printf ("YES\n");
	return 0;
}