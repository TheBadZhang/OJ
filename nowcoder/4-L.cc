#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
using ll = long long;
const int N = 20;
ll a[N], b[N], c[N], d[N];
int n;
ll dfs(int num, ll money, ll mofa) {
	if (num == n + 1) return money * mofa;
	ll temp = mofa - b[num];
	ll res = dfs(num + 1, money + a[num], temp < 0 ? 0 : temp);
	temp = money - d[num];
	res = max(res, dfs(num + 1, temp < 0 ? 0 : temp, mofa + c[num]));
	return res;
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
	}
	ll res = dfs(1, 0, 0);
	printf("%lld\n", res);
	return 0;
}
