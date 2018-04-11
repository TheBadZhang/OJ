#include <cstdio>

int main () {

	int a, b, c, d, n;

	scanf ("%d", &n);

	for (int a = 6; a <= n; a += 1) {
		for (int b = 2; b <= n; b += 1) {
			for (int c = b; c <= n; c += 1) {
				for (int d = c; d <= n; d += 1) {
					if (a*a*a == b*b*b+c*c*c+d*d*d) {
						// 判断不能用 pow 会超时
						printf ("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
					}
				}
			}
		}
	}









	return 0;
}