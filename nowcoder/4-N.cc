#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)

const int N = 1e5 + 10;

struct node {
	int a, b, c;
} p[N];
bool cmp(node &a, node &b) {
	return a.c > b.c;
}
int fa[20005], e[20005];

int find (int x) {
	if (fa[x] == x) return x;
	return fa[x] = find(fa[x]);
}

void unite (int x, int y) {
	int fx = find(x);
	int fy = find(y);
	fa[fx] = fy;
}

int main () {

	int n, m;
	scanf ("%d %d", &n, &m);
	FOR(i,1,m) scanf ("%d %d %d", &p[i].a, &p[i].b, &p[i].c);
	sort (p + 1, p + m + 1, cmp);
	FOR(i,1,20005) fa[i] = i;


	FOR(i,1,m) {
		if (find(p[i].a) == find(p[i].b)) {
			printf ("%d\n", p[i].c);
			return 0;
		} else if (!e[p[i].a] && !e[p[i].b]) {
			e[p[i].a] = p[i].b;
			e[p[i].b] = p[i].a;
		} else if (e[p[i].a] && !e[p[i].b]) {
			unite(e[p[i].a], p[i].b);
			e[p[i].b] = p[i].a;
		} else if (!e[p[i].a] && e[p[i].b]) {
			unite(e[p[i].b], p[i].a);
			e[p[i].a] = p[i].b;
		} else if (e[p[i].a] && e[p[i].b]) {
			unite(e[p[i].a], p[i].b);
			unite(e[p[i].b], p[i].a);
		}
	}

	cout << 0 << endl;
	return 0;
}
