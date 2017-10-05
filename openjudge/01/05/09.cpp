#include <cstdio>


int main() {


	int m, n;
	scanf("%d%d", &m, &n);
	int he = 0;
	for (int a = m; a <= n; a += 1) {
		if (a%2 == 1) {
			he += a;
		}
	}

	printf("%d", he);


	return 0;
}