#include <iostream>
#include <algorithm>


using ll = long long;
using namespace std;

const int maxx = 1e6 + 100;
const int mod = 1e9 + 7;
char ans[300][300];
int ans1[maxx], ans2[maxx];
int dir[][2] = {1, 0, -1, 0, 0, 1, 0, -1, -1, -1, -1, 1, 1, -1, 1, 1};
int num, m;
void dfs (int x, int y, int k) {
	if (ans[x][y] == '.') return;
	ans[x][y] = '.', ++num;
	for (int i = 0; i < 8; i++) {
		int xx = x + dir[i][0], yy = y + dir[i][1];
		if (xx >= 0 + k && xx < 4 + k && yy >= 0 && yy < m) {
			dfs(xx, yy, k);
		}
	}
}
int main () {
	cin >> m;
	for (int i = 0; i < 8; i++) cin >> ans[i];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < m; j++) {
			if (ans[i][j] == '*') {
				num = 0;
				dfs(i, j, 0);
				ans1[++ans1[0]] = num;
			}
		}
	}
	for (int i = 4; i < 8; i++) {
		for (int j = 0; j < m; j++) {
			if (ans[i][j] == '*') {
				num = 0;
				dfs(i, j, 4);
				ans2[++ans2[0]] = num;
			}
		}
	}
	if (ans1[0] > ans2[0]) {
		cout << -1;
	} else {
		sort(ans2 + 1, ans2 + ans2[0] + 1);
		int sum = 0;
		for (int i = ans1[0]; i <= ans2[0]; i++) sum += ans2[i];
		cout << sum;
	}
	return 0;
}
