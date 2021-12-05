#include <iostream>
using namespace std;
#define ll long long

const int maxn = 100001;
ll dp[maxn], i;

void Dp() {
	dp[0] = 0;
	for (i = 1; i < maxn; i++) {
		if (i % 3 == 0)
			dp[i] = dp[i - 1] + i * i * i;
		else
			dp[i] = dp[i - 1] + i;
	}
}

int main() {
	int n;
	Dp();
	while (scanf("%d", &n) && n >= 0) {
		printf("%lld\n", dp[n]);
	}
	return 0;
}
