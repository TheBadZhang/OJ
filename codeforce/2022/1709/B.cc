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
// #define MULTI_INPUT
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


ll a[100100];
ll b[100100];
ll c[100100];

void solve() {
	int n, m;
	cin >> n >> m;
	cin >> a[1];
	b[0] = 0;
	// cin >> a[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		int tt = a[i-1] - a[i];
		if (tt > 0) b[i] = b[i-1] + tt;
		else b[i] = b[i-1];
	}
	c[n] = 0;
	for (int i = n-1; i > 0; i--) {
		int tt = a[i+1] - a[i];
		if (tt>0) c[i] = c[i+1] + tt;
		else c[i] = c[i+1];
	}
	// for (int i = 1; i<=n; i++) {
	// 	printf("%d,", a[i]);
	// }
	// puts("");
	// for (int i = 1; i<=n; i++) {
	// 	printf("%d,", b[i]);
	// }
	// puts("");
	// for (int i = 1; i<=n; i++) {
	// 	printf("%d,", c[i]);
	// }
	// puts("");
	int s, t;
	for (int i = 0; i < m; i++) {
		cin >> s >> t;
		if (s < t) {
			cout << b[t]-b[s] << endl;
		} else {
			cout << c[t]-c[s] << endl;
		}
	}

}