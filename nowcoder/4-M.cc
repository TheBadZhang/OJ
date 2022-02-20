#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;
#define FOR(x,b,e) for(int x=b; x<=e; ++x)

const int N = 1e5 + 10;
ll n, h, r;
int fa[1001];
ll x[N], y[N], z[N];
int bot[N], top[N];


int find (int x) {
	if (fa[x] == x) return x;
	return fa[x] = find(fa[x]);
}
double dist (ll x1, ll y1, ll z1, ll x2, ll y2, ll z2) {
	return sqrt ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2));
}
int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		int tot1 = 0;
		int tot2 = 0;
		scanf ("%lld%lld%lld", &n, &h, &r);
		FOR(i,1,n) fa[i] = i;
		FOR(i,1,n) {
			scanf ("%lld%lld%lld", &x[i], &y[i], &z[i]);
			if (z[i] + r >= h) {
				tot1++;
				top[tot1] = i;
			}
			if (z[i] - r <= 0) {
				tot2++;
				bot[tot2] = i;
			}
			FOR(j,1,i) {
				if (dist (x[i], y[i], z[i], x[j], y[j], z[j]) <= 2 * r) {
					int f1 = find (i);
					int f2 = find (j);
					if (f1 != f2)
						fa[f1] = f2;
				}
			}
		}
		bool flag = 0;
		FOR(i,1,tot1) FOR(j,1,tot2) {
			if (find(bot[j]) == find(top[i])) {
				flag = true;
				i = tot1+1;
				break;
			}
		}
		if (flag) printf("Yes\n");
		else      printf("No\n");
	}
	return 0;
}
