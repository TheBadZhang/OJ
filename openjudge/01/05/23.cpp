#include <cstdio>

int main() {

	int P = 0;

	int n, m;
	scanf("%d%d", &m, &n);

	for (int a = 0; a < n; a += 1) {
		int M;
		scanf("%d", &M);
		if (M>m) {
			P += 1;
			continue;
		} else m -= M;
	}
	printf("%d", P);


	return 0;
}