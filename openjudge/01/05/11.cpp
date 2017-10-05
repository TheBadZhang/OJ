#include <cstdio>

int main() {


	int m;
	scanf("%d", &m);

	int a;
	int b[3] = {0, 0, 0};
	for (int d = 0; d < m; d += 1) {
		scanf("%d", &a);
		if (a == 1) {
			b[0] += 1;
		} else if (a == 5) {
			b[1] += 1;
		} else if (a == 10) {
			b[2] += 1;
		}
	}

	printf("%d\n%d\n%d", b[0],b[1],b[2]);

	return 0;
}