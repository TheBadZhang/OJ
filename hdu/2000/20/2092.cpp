#include <cstdio>
int main() {
	int i, n, m, t;
	while (scanf("%d%d", &n, &m) && (m != 0 || n != 0)) {
		t = 0;
		for (i = -10000; i < 10000; i++) {
			if (i * (n - i) == m) {
				t = 1;
				break;
			}
		}
		if (t) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}