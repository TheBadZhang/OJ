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
#define FOR2(x,s,e) for(int x=s;x<e;x++)


const int max_n = 350;
const int max_q = 1500;
const int INF = 1e9;
int vis[max_n * max_n];
int ans[max_n * max_n];
int n, m, qq;
int start, End;

int bfs () {
	int p1, p2, p3, p4;
	deque<int> q;
	ans[start] = 0;
	q.push_back(start);
	while (!q.empty()) {
		int cur = q.front();
		q.pop_front();
		p1 = cur - 1;
		p2 = cur + 1;
		p3 = cur - m;
		p4 = cur + m;
		if (cur % m != 0 && vis[p1]) {
			if (ans[p1] > ans[cur] + 1) {
				ans[p1] = ans[cur] + 1;
				q.push_back(p1);
			}
		}
		if (p2 % m != 0 && vis[p2]) {
			if (ans[p2] > ans[cur] + 1) {
				ans[p2] = ans[cur] + 1;
				q.push_back(p2);
			}
		}
		if (p3 >= 0 && vis[p3]) {
			if (ans[p3] > ans[cur] + 1) {
				ans[p3] = ans[cur] + 1;
				q.push_back(p3);
			}
		}
		if (p4 < m * n && vis[p4]) {
			if (ans[p4] > ans[cur] + 1) {
				ans[p4] = ans[cur] + 1;
				q.push_back(p4);
			}
		}
		if (vis[cur] > INF) {
			int p5 = vis[cur] - INF;
			if (ans[p5] > ans[cur] + 3) {
				ans[p5] = ans[cur] + 3;
				q.push_back(p5);
			}
		}
	}
	if (ans[End] == INF) return -1;
	return ans[End];
}

int main() {

	while (cin >> n >> m >> qq) {
		char ch;
		fill(vis, vis + max_n * max_n, 2);
		fill(ans, ans + max_n * max_n, INF);
		FOR2(i,0,n) FOR2(j,0,m) {
			cin >> ch;
			switch (ch) {
				case 'S': start = i * m + j; break;
				case '#': vis[i * m + j] = 0; break;
				case 'T': End = i * m + j; break;
			}
		}
		int x1, y1, x2, y2;
		FOR2(i,0,qq) {
			cin >> x1 >> y1 >> x2 >> y2;
			if (!vis[x1 * m + y1] || !vis[x2 * m + y2]) continue;
			vis[x1 * m + y1] = INF + x2 * m + y2;
		}
		cout << bfs() << endl;
	}
}
