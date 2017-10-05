#include <cstdio>

int
main () {

	int n;
	scanf ("%d", &n);
	int max = 0, min = 0x7fffffff;
	for (int a = 0; a < n; a += 1) {
		int num;
		scanf ("%d", &num);
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}

	printf ("%d", max - min);

	return 0;
}