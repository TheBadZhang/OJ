#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <climits>

using ll = long long;
using namespace std;

const int N = 550;
int n, m, k, d;
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int dis[N][N], vis[N][N], mp[N][N];
#define fill_zero(aa) \
	for (int i = 0; i < N; ++i)       \
		for (int j = 0; j < N; ++j)   \
			aa [i][j] = 0;            \

int bfs_no_door(int s, int f) {
	fill_zero (dis);
	fill_zero (vis);
	queue<int> q;
	q.push(s);
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		int x = tmp / m, y = tmp % m;
		vis[x][y] = 1;
		for (int k = 0; k < 4; k++) {
			int tx = x + dir[k][0], ty = y + dir[k][1];
			if (tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
			if (vis[tx][ty] == 1 || mp[tx][ty] == 0 || tx * m + ty == d) continue;
			vis[tx][ty] = 1;
			dis[tx][ty] = dis[x][y] + 1;
			if (tx * m + ty == f) return dis[tx][ty];
			q.push(tx * m + ty);
		}
	}
	return INT_MAX;
}


int bfs_key_door(int s, int f) {
	fill_zero (dis);
	fill_zero (vis);
	queue<int> q;
	q.push(s);
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		int x = tmp / m, y = tmp % m;
		vis[x][y] = 1;
		for (int k = 0; k < 4; k++) {
			int tx = x + dir[k][0], ty = y + dir[k][1];
			if (tx < 0 || ty < 0 || tx >= n || ty >= m) continue;
			if (vis[tx][ty] == 1 || mp[tx][ty] == 0) continue;
			vis[tx][ty] = 1;
			dis[tx][ty] = dis[x][y] + 1;
			if (tx * m + ty == f) return dis[tx][ty];
			q.push(tx * m + ty);
		}
	}
	return INT_MAX;
}
int main () {
	int s, e;
	ll ans1, ans2, ans3;
	char ch;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %c", &ch);
			switch (ch) {
				case 'W': {
					mp[i][j] = 0;
				} break;
				case 'S': {
					s = i * m + j;
					mp[i][j] = 1;
				} break;
				case 'E': {
					e = i * m + j;
					mp[i][j] = 1;
				} break;
				case 'K': {
					k = i * m + j;
					mp[i][j] = 1;
				} break;
				case 'D': {
					d = i * m + j;
					mp[i][j] = 1;
				} break;
				case '.': {
					mp[i][j] = 1;
				} break;
			}
		}
	}
	ans1 = bfs_no_door(s, e);
	ans2 = bfs_no_door(s, k);
	ans3 = bfs_key_door(k, e);
	if (ans1 == INT_MAX && (ans2 == INT_MAX || ans3 == INT_MAX))
		cout << -1;
	else
		cout << min(ans1, ans2 + ans3);
}
