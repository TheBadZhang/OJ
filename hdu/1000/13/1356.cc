#include <iostream>
#include <cstdio>
#include <cstring>

const int N = 10010;
int c1[N], c2[N];
int w[110], res[N];

int main () {

	int n;
	while (~scanf ("%d", &n)) {
		memset (c1, 0, sizeof(c1));
		memset (c2, 0, sizeof(c2));

		int s = 0;

		for (int i = 1; i <= n; i++) {
			scanf ("%d", &w[i]);
			s += w[i];
		}

		c1[0] = 1;
		c1[w[1]] = 1;

		for (int i = 2; i <= n; i++) {
			for (int j = 0; j <= s; j++) {
				for (int k = 0; k+j <= s && k <= w[i]; k += w[i]) {
					c2 [k+j] += c1[j];
					c2[abs(k-j)] += c1[j];
				}
			}
		}
		printf ("%d\n", c1[n]);
	}

	return 0;
}