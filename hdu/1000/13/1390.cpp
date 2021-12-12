#include <cstdio>
#include <string>
int main() {
	int N, n, num;
	int s[100];
	scanf("%d", &N);
	while (N--) {
		int i = 0;
		num = 0;
		scanf("%d", &n);
		while (n) {
			s[i] = n % 2;
			n /= 2;
			i++;
		}
		for (int k = 0; k < i; k++) {
			if (s[k] == 1) {
				num++;
				if (num == 1)
					printf("%d", k);
				else
					printf(" %d", k);
			}
		}
		printf("\n");
	}
	return 0;
}