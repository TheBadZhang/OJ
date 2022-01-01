#include <iostream>
#include <cstdio>
#include <cstring>

const int N = 130;
int c1[N], c2[N];

int main () {
	int n;
	while (~scanf("%d", &n)) {
		memset (c2, 0, sizeof(c2));
		for (int i = 0; i <= n; i++) c1[i] = 1;

		for (int i = 2; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				for (int k = 0; k+j <= n; k+= i) {
					c2[k+j] += c1[j];
				}
			}
			for (int j = 0; j <= n; j++) {
				c1[j] = c2[j];
				c2[j] = 0;
			}
		}
		printf ("%d\n", c1[n]);
	}
	return 0;
}