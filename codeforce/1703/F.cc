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


int a[300000];


int main () {

	int T;
	cin >> T;
	while (T--) {
		long long count = 0;
		int n, t;
		int ii = 0, jj = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			t = read();
			if (t < i) {
				count += a[t-1];
				ii ++;
			}
			a[i] = ii;
		}
		cout << count << endl;
	}

	return 0;
}