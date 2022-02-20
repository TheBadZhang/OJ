#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>

using ll = long long;
using namespace std;
const int maxn = 100005;
int n, m, s, t;
bool mark[maxn], mark2[maxn], vist[maxn];
vector<int> G1[maxn], G2[maxn];
// G1????,G2????.

void BFS2() {
	queue<pair<int, int>> Q;
	Q.push(make_pair(s, 0)), vist[s] = true;
	while (!Q.empty()) {
		int x = Q.front().first;
		int step = Q.front().second;
		Q.pop();
		if (x == t) {
			printf("%d\n", step);
			return;
		}
		for (const int& i:G1[x])
			if (!vist[i] && mark2[i])
				Q.push(make_pair(i, step + 1)), vist[i] = true;
	}
}
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1, from, to; i <= m; i++) {
		scanf("%d%d", &from, &to);
		G1[from].push_back(to);
		G2[to].push_back(from);
	}
	scanf("%d%d", &s, &t);

	queue<int> Q;
	Q.push(t), mark[t] = true;
	while (!Q.empty()) {
		int x = Q.front();
		Q.pop();
		for (const int& i:G2[x]) {
			if (!mark[i]) {
				Q.push(i);
				mark[i] = true;
			}
		}
	}

	if (!mark[s]) {
		printf("-1\n");
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		mark2[i] = true;
		for (const int& j:G1[i]) if (!mark[j]) mark2[i] = false;
	}
	BFS2();
	return 0;
}
