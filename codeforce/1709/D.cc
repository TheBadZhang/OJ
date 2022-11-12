#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)
#define ROF0(x, b, e) for (int x = b; x > e; --x)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

inline ll read(){
	ll s = 0, w = 1; char ch = getchar();
	while (ch < 48 || ch > 57) { if (ch == '-') w = -1; ch = getchar(); }
	while (ch >= 48 && ch <= 57) s = (s << 1) + (s << 3) + (ch ^ 48), ch = getchar();
	return s * w;
}
long long mypow(int base, int a) {
	long long i = 1;
	while (a--) i*=base;
	return i;
}
long long gcd(long long x, long y) {
	while(y^=x^=y^=x%=y);
	return x;
}

void solve();
#define MULTI_INPUT
int main () {
	std::ios::sync_with_stdio(false);
	cin.tie(0);
#ifdef MULTI_INPUT
	int T;
	cin >> T;
	while (T--) solve();
#else
	solve();
#endif
	return 0;
}


ll a[200200];
ll b[200200];
ll c[200200];
void solve() {
	int n, m;
	cin >> n >> m;
	cin >> a[1];
	b[1] = a[1];
	for (int i = 2; i <= m; i++) {
		cin >> a[i];
		if (b[i-1] > a[i]) b[i] = b[i-1];
		else b[i] = a[i];
	}
	c[m+1] = 0;
	for (int i = m; i > 0; i--) {
		if (c[i+1] > a[i]) c[i] = c[i+1];
		else c[i] = a[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int xs, ys, xf, yf, k;
		bool flag = true;  // pretend it could
		cin >> xs >> ys >> xf >> yf >> k;
		if (b[xf] == n || (yf <= a[xf] || ys <= a[xs])) flag = false;
		// 首先不能完全被挡住，其次，起点、终点不能在blocked区
		else {
			if (abs(yf-ys) % k == 0) {
				if (yf > ys) {
					if (((b[yf]-ys)/k+1)*k > n) flag = false;
				} else {
					if (((c[yf]-ys)/k+1)*k > n) flag = false;
				}
			} else if (abs(xf-xs) % k == 0) {
				if ()
			}
			else flag = false;
			// 不能两个同时都不是k的倍数，一个是k的倍数即可
		}
	}
}