#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)

const int N = 1e6 + 3;
int a[N], maxx[N],  mins[N];
void mmin(int n, int m) {
	int l = 1, r = 0;
	FOR(i,1,n) {
		while (l <= r && mins[l] + m <= i) l++;
		while (l <= r && a[i] < a[mins[r]]) r--;
		mins[++r] = i;
		if (i >= m) cout << a[mins[l]] << " ";
	}
}
void mmax(int n, int m) {
	int l = 1, r = 0;
	FOR(i,1,n) {
		while (l <= r && maxx[l] + m <= i) l++;
		while (l <= r && a[i] > a[maxx[r]]) r--;
		maxx[++r] = i;
		if (i >= m) cout << a[maxx[l]] << " ";
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	FOR(i,1,n) cin >> a[i];
	mmin(n, m);
	cout << endl;
	mmax(n, m);
	return 0;
}
