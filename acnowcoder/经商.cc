#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>
#include <set>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)
#define ROF0(x, b, e) for (int x = b; x > e; --x)
inline ll read(){
	ll s = 0, w = 1; char ch = getchar();
	while (ch < 48 || ch > 57) { if (ch == '-') w = -1; ch = getchar(); }
	while (ch >= 48 && ch <= 57) s = (s << 1) + (s << 3) + (ch ^ 48), ch = getchar();
	return s * w;
}
const int N = 1e6+10;

int f[N], a[N], b[N], dp[N];
int search(int x) {
	return f[x] == x ? f[x] : f[x] = search(f[x]);
}
int main() {
	int t, n, m, c, ans, cnt, x, y;
	scanf("%d", &t);
	while (t--) {
		ans = 0, cnt = 0;
		scanf("%d%d%d", &n, &m, &c);
		FOR(i,1,n) f[i] = i;
		FOR(i,2,n) scanf("%d%d", &a[i], &b[i]);
		FOR(j,1,m) {
			scanf("%d%d", &x, &y);
			f[search(x)] = search(y); // merge
		}
		memset(dp, 0, sizeof(dp));
		FOR(i,2,n) if (search(i) == search(1)) ROF(j,c,a[i]) dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
		printf("%d\n", dp[c]);
	}
}
