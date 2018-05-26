#include <cstdio>

int main() {

	int a, b, c;
	scanf ("%d%d%d", &a, &b, &c);
	for (int d = 2; ; d += 1) {
		int a1 = a % d;
		int b1 = b % d;
		int c1 = c % d;
		if (a1 == b1 && a1 == c1 && a1 == c1) {
			printf ("%d", d);
			break;
		}
	}


	return 0;
}