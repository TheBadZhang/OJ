#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <climits>

using ll = long long;
using namespace std;

int flag = 0;
int a[10][10];
const int n = 9;

#define FOR(x,s,e) for(int x=s;x<=e;x++)

bool judge (int x, int y, int k) {
	for (int i = 1; i <= n; i++) {
		if (a[i][y] == k || a[x][i] == k) return false;
	}
	int xx, yy;
	xx = (x - 1) / 3 + 1;
	yy = (y - 1) / 3 + 1;
	for (int i = (xx - 1) * 3 + 1; i <= (xx - 1) * 3 + 3; i++) {
		for (int j = (yy - 1) * 3 + 1; j <= (yy - 1) * 3 + 3; j++) {
			if (i == x && y == j) continue;
			if (a[i][j] == k) return false;
		}
	}
	return true;
}

void solve () {
	if (flag == 1) return;
	int gg = 0;
	FOR(i,1,n) FOR(j,1,n) if (a[i][j] == 0) gg = 1;
	if (gg == 0) {
		flag = 1;
		return;
	}
	FOR(i,1,n) FOR(j,1,n) if (a[i][j] == 0) {
		int k;
		for (k = 1; k <= 9; k++) {
			if (judge(i, j, k)) {
				a[i][j] = k;
				solve();
				if (flag == 1) return;
				a[i][j] = 0;
			}
		}
		if (k == 10) return;
	}
	return;
}

int main() {
	FOR(i,1,n) FOR(j,1,n) cin >> a[i][j];
	solve();
	FOR(i,1,n) {
		FOR(j,1,n) {
			if (j == 1) cout << a[i][j];
			else cout << " " << a[i][j];
		}
		cout << endl;
	}

	return 0;
}
