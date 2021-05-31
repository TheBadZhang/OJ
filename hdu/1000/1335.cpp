#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 20
char s[N], w[N];
char y[N];
int a, b;
int T(int x, int n) {
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s *= x;
	}
	return s;
}
int main() {
	while (scanf("%s%d%d", s, &a, &b) != EOF) {
		int i, sum = 0, l;
		l = strlen(s);
		for (i = 0; i < l; i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				sum += ((s[i] - '0') * T(a, l - i - 1));
			}
			else if (s[i] >= 'A' && s[i] <= 'Z') {
				sum += ((s[i] - 'A' + 10) * T(a, l - i - 1));
			}
		}
		int cnt = 0;
		while (sum > 0) {
			int u = sum % b;
			if (u >= 0 && u <= 9) {
				w[cnt++] = u + '0';
			}
			else {
				w[cnt++] = (u - 10) + 'A';
			}
			sum /= b;
		}
		for (i = 0; i < cnt; i++) {
			y[i] = w[cnt - i - 1];
		}
		if (cnt > 7) {
			printf("  ERROR");
		}
		else {
			for (i = 0; i < 7 - cnt; i++) {
				printf(" ");
			}
			for (i = 0; i < cnt; i++) {
				printf("%c", y[i]);
			}
		}
		printf("\n");
	}
	return 0;
}