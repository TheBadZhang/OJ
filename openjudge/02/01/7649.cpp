#include <cstdio>

int main () {

	int n, l [1000] = {0};
	l [0] = 1;
	scanf ("%d", &n);
	for (int a = 1; a < 1000; a += 1)
		l [a] = l [a-1] + a + 1;

	for (int a = 0; a < 1000; a += 1)
		for (int b = 0; b < a+1; b += 1)
			if (l [a] - 2*(b+1) == n) {
				printf ("%d %d", b+1, a+1);
				return 0;
			}
}