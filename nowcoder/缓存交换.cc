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

const int N = 1e5 + 10;
int book[N], nxt[N];
map<int, int> M;
struct node {
	int id, nit;
	friend bool operator<(node a, node b) {
		return a.nit < b.nit;
	}
} a[N];

priority_queue<node> q;
int main() {
	int n, m, cnt = 0;
	scanf("%d%d", &n, &m);
	FOR(i,1,n) {
		a[i].id = read();
		if (M[a[i].id] == 0) M[a[i].id] = ++cnt;
	}
	ROF(i,n,1) {
		if (nxt[M[a[i].id]] == 0) a[i].nit = 100010;
		else a[i].nit = nxt[M[a[i].id]];
		nxt[M[a[i].id]] = i;
	}
	int sum = 0;
	cnt = 0;
	FOR(i,1,n) {
		if (book[M[a[i].id]] != 1) {
			++cnt;
			if (cnt > m) {
				--cnt;
				book[M[q.top().id]] = 0;
				q.pop();
			}
			book[M[a[i].id]] = 1;
			sum++;
		}
		q.push(a[i]);
	}
	cout << sum << endl;
}
