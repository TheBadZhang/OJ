#include <cstdio>

int main() {


	int m, n;
	scanf("%d%d", &m,&n);

	int d;
	int all = 0;
	for (int a = 0; a < m; a += 1) {
		scanf("%d", &d);
		if (d == n) {
			all += 1;
		}
	}

	printf("%d", all);

	return 0;
}