/* HDU2500 做一个正气的杭电人 */

#include <cstdio>

#define N 3

int main() {
	int n, m, i, j;

	scanf("%d", &n);
	while(n--) {
		scanf("%d", &m);

		for(i=1; i<=m*N; i++) {
			for(j=1; j<=m; j++)
				printf("HDU");
			printf("\n");
		}
	}

	return 0;
}