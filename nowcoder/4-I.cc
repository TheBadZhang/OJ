#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <string>
#include <unordered_map>

using ll = long long;
using namespace std;
#define FOR(x,s,e) for(int x=s;x<=e;x++)

const int N = 60 + 7;
int a[N];
int vis[N], n, m = 0;

bool dfs(int num, int l, int len, int now) {
	if (!num && !l) return true;
	if (!l) {l = len, now = 1;}
	for (int i = now; i <= n; ++i) {
		if (vis[i] || a[i] > l) continue;

		vis[i] = 1;
		if (dfs(num - 1, l - a[i], len, i)) return true;
		vis[i] = 0;

		if (l == len or l == a[i]) break;
		while (a[i] == a[i + 1]) ++i;
	}
	return false;
}

int main () {
	cin >> n;

	FOR(i,1,n) {
		scanf ("%d", &a[i]);
		m += a[i];
	}
	int ans = 0;
	sort (a + 1, a + 1 + n, greater<int>());
	FOR(i, a[1], m) {
		if (m % i != 0) continue;
		if (dfs(n, i, i, 1)) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
