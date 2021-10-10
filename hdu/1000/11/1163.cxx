#include <iostream>

using namespace std;

int qp (int x, int n, int MOD) {
	int res = 1;
	while (n) {
		if(n & 1) res = (res * x) % MOD;
		x = (x * x) % MOD;
		n >>= 1;
	}
	return res;
}

int main () {
	int n;
	while (~scanf("%d", &n) && n) {
		int ans = qp (n, n, 9);
		if (ans == 0) {
			ans = 9;
		}
		printf("%d\n", ans);
	}
}