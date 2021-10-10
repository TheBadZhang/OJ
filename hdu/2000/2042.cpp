#include <cstdio>
#include <cstdlib>
int f(int m) {
	if (m == 1) return 4;
	else        return (f(m - 1) - 1) * 2;
}
int main() {
	int n, m;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		printf("%d\n", f(m));
	}

	return 0;
}