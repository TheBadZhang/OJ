/* HDU1846 Brave Game */

#include <cstdio>

int main() {
	int t, n, m;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &n, &m);
		if(n % (m + 1) == 0) puts("second");
		else puts("first");
	}

	return 0;
}