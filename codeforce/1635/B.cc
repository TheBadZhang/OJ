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
/*
inline ll _pow(ll a, ll b) {
	return _
}*/

const int N = 2e5+10;
ll a[N];

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n = read();
		int count = 0;
		FOR(i,1,n) a[i] = read();
		a[n+1] = 10000000000;
		FOR0(i,2,n) {
			if (a[i] > a[i-1] && a[i] > a[i+1]) {  // local maximums
				a[i+1] = max(a[i], a[i+2]);
				count ++;
			}
		}
		printf ("%d\n%lld", count, a[1]);
		FOR(i,2,n) printf (" %lld", a[i]);
		puts("");
	}

	return 0;
}