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
#define FOR(x, s, e) for (int x = s; x <= e; x++)
#define FOR2(x, s, e) for (int x = s; x < e; x++)

const int maxn = 4 * 1e7 + 100;


ll n, flag, a[maxn], b[maxn];
int vis[maxn];
int huan[maxn];
char ans[maxn];

bool dfs(ll pos, ll cur) {
	if (pos < 1 || pos > n) return false;
	if (pos == n) {
		ans[cur] = '\0';
		flag = 1;
		return true;
	}
	if (vis[pos] == 1) return false;
	else if (vis[pos] == 2) {
		huan[pos] = 1;
		return false;
	}
	vis[pos] += 2;
	ans[cur] = 'a';
	if (dfs(pos + a[pos], cur + 1)) {
		if (huan[pos]) flag = 2;
		return true;
	}
	ans[cur] = 'b';
	if (dfs(pos + b[pos], cur + 1)) {
		if (huan[pos]) flag = 2;
		return true;
	}
	vis[pos]--;
	return false;
}

int main() {

	cin >> n;
	FOR(i,1,n) cin >> a[i];
	FOR(i,1,n) cin >> b[i];

	dfs(1, 0);

	string
	switch (flag) {
		case 0: cout << "No solution!" << endl; break;
		case 1: cout << ans << endl; break;
		case 2: cout << "Infinity!" << endl; break;
	}

	return 0;
}
