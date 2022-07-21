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


int a[100100];
int b[100100];
int dp[100100];
int dp2[100100];

int func(int i) {
	return max({0, -(a[i]-a[i-1])+1,-(a[i]-a[i+1])+1});
}
void solve() {
	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dp[i] = 0;
	}
	for (int i = 1; i < n-1; i++) {
		b[i] = func(i);
	}
	if (n % 2 == 0) {
		vector<array<long long,2>> dp(n, {INT_MAX, INT_MAX});
		dp[0][0] = 0; dp[0][1] = 0;
		int j = 1;
		for (int i = 1; i < n-1; i+= 2, j++) {
			dp[j][0] = dp[j-1][0] + func(i);
			dp[j][1] = min(dp[j-1][1], dp[j-1][0]) + func(i+1);
		}
		cout << min (dp[j-1][0], dp[j-1][1]) << endl;
	} else {
		ll counts = 0;
		for (int i = 1; i < n; i += 2) {
			counts += func(i);
		}
		cout << counts << endl;
	}
}