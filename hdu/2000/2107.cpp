#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int a[105];

int main() {
	while (scanf("%d", &n) == 1) {
		if (!n) break;
		int maxx = -0x3f3f3f3f;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			maxx = max(maxx, a[i]);
		}
		printf("%d\n", maxx);
	}

	return 0;
}