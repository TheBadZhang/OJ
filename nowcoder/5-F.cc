#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)

const int N = 1e5;

struct node {
	int id;
	int nex;
	bool operator<(const node &x) const { return nex < x.nex; }
};
bool st[N];
int pos[N], nexts[N],a[N],n, m, q, res;


int main() {
	while (cin >> n >> m >> q) {
		memset(pos, 0x3f, sizeof(pos));
		memset(st, false, sizeof(st));
		priority_queue<node> pq;
		int k = 0;
		FOR (i,1,q) cin >> a[i];
		ROF (i,q,1) {
			nexts[i] = pos[a[i]];
			pos[a[i]] = i;
		}

		FOR(i,1,q) {
			int id = a[i];

			if (k < n && !st[id]) {
				res++;
				st[id] = true;
				k++;
			} else if (k == n && !st[id]) {
				res++;
				auto t = pq.top();
				pq.pop();
				st[t.id] = false;
				st[id] = true;
			}
			pq.push({id, nexts[i]});
		}
		cout << res << endl;
		res = 0;
	}

	return 0;
}
