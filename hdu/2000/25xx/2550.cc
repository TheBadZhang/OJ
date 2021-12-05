#include <cstdio>
int main() {
	int t;
	scanf("%d", &t); //输入t车箭矢
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[50], b[10], i = 0, j = 0, k = 0, h = 0;
		for (i = 0; i < n; i++) {
			scanf("%d %d", &a[i], &b[i]);
		}
		for (k = 0; k < n - 1; k++) {
			for (i = 0; i < n - 1 - k; i++) {
				if (a[i + 1] < a[i]) {
					h = a[i + 1]; //h是中间变量
					a[i + 1] = a[i];
					a[i] = h;
					h = b[i + 1];
					b[i + 1] = b[i];
					b[i] = h;
				}
			}
		}
		for (k = 0; k < n; k++) {
			for (i = 1; i <= b[k]; i++) {
				printf(">+");
				for (j = 1; j <= a[k] - 2; j++) {
					printf("-");
				}
				printf("+>\n");
			}
			printf("\n");
		}
	}
	return 0;
}
