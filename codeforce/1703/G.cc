#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>
#include <numeric>
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
long long mypow(int base, int a) {
	long long i = 1;
	while (a--) i*=base;
	return i;
}

int dp[100100][32];
int a[100100];

int main () {

	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		long long sum = 0;
		long long money = 0;
		for (int i = 0; i < n; i++) {
			a[i] = read();
		}
		dp[0][0] = a[0] - k;
		for (int i = 1; i < n; i++) {
			dp[i][0] = dp[i-1][0] + a[0] - k;
		}
		for (int j = 1; j < 32; j++) {
			int b = 2;
			dp[0][j] = a[0]/b;
			b *= 2;
			for (int i = 1; i < j; i++) {
				dp[i][j] = a[i] / b;
				b *= 2;
			}
			for (int i = j; i < n; i++) {
				dp[i][j] = max (dp[i-1][j]+a[i]/b-k, dp[i-1][j-1]+a[i]/b);
			}
		}
		int maxx = 0;
		for (int j = 0; j < 32; j++) {
			if (dp[n-1][j] > maxx) maxx = dp[n-1][j];
		}

		cout << maxx << endl;
	}

	return 0;
}