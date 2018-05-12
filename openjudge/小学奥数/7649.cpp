#include <cstdio>

int main () {

	int n;
	scanf ("%d", &n);
	for (int a = 1; ;a += 1) {
		for (int b = 1; b <= a; b += 1) {
			if ((1+a)*a/2.0 - 2*b == n) {
				printf ("%d %d", b, a);
				return 0;
			}
		}
	}


	return 0;
}