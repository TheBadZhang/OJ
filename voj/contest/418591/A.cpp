#include <cstdio>


int gcd (int a, int b) {
	return b?gcd(b,a%b):a;
}

int main() {
	int x[110], y[110], n, i, j, k;
	while (scanf("%d", &n) != EOF && n) {
		for (i = 0 ; i < n<<1 ; ++i) {
			scanf("%d%d", x+i, y+i);
		}
		for (i = -500 ; i <= 500 ; ++i) {
			for (j=-500 ; j<=500 ; j++) {
				if (gcd(i, j) == 1) {
					int cnt = 0;
					for (k = 0 ; k < n<<1 ; ++k) {
						if (i*x[k] + j*y[k] == 0) {
							cnt = 0;
							break;
						} else if (i*x[k] + j*y[k] > 0) {
							++ cnt;
						}
					}
					if (cnt == n) {
						printf("%d %d\n", i, j);
						i = 501;
						break;
					}
				}
			}
		}
	}
	return 0;
}