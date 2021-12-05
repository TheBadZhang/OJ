/* HDU2149 Public Sale */

#include <bits/stdc++.h>

int main() {
	int n, m;
	while(~scanf("%d%d", &m, &n)) {
		if(m % (n + 1) == 0) puts("none");
		else {
			if(m <= n) {
				printf("%d", m);
				for(int i = m + 1; i <= n; i++) printf(" %d", i);
				putchar('\n');
			} else
				printf("%d\n", m %(n + 1));
		}
	}

	return 0;
}