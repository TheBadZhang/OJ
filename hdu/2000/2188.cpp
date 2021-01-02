/* HDU2188 选拔志愿者 */

#include <bits/stdc++.h>

using namespace std;

int main() {
	int c, n, m;
	scanf("%d", &c);
	while(c--) {
		scanf("%d%d", &n, &m);
		n % (m + 1) == 0 ? puts("Rabbit") : puts("Grass");
	}

	return 0;
}