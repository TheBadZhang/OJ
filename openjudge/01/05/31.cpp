#include <cstdio>

int main() {

	int n, m;
	scanf("%d%d", &n, &m);
	printf("1");
	for (int a = 2; a <= n; a += 1) {
		bool light = true;
		for (int b = 1; b <= m; b += 1) {
			if (a%b == 0) {
				light = !light;
			}
		}
		if (!light) {
			printf(",%d", a);
		}
	}
	

	return 0;
}