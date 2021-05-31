#include <cstdio>
#define N 20
int A[N];
int main() {

	int i = 0;
	while (scanf("%d", &A[i])) {
		if (i == 0 && A[i] == -1) {
			break;
		}
		if (A[i] == 0) {
			int j, k, n = i, sum = 0;
			for (j = 0; j < n - 1; j++) {
				for (k = j + 1; k < n; k++) {
					if (A[j] == 2 * A[k] || A[k] == 2 * A[j]) {
						sum++;
					}
				}
			}
			printf("%d\n", sum);
			i = 0;
			continue;
		}
		i++;
	}
	return 1;
}