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

int a[500];


int n, n2, m;
int main () {

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool flag = true;
		int x;
		for (int i = 0; i < n && flag; i++) {
			if (i > 0) {
				x = a[0];
				for (int j = 1; j < n; j++) {
					if (j != i) x ^= a[j];
				}
			} else {
				x = a[1];
				for (int j = 2; j < n; j++) {
					if (j != i) x ^= a[j];
				}
			}
			if (x == a[i]) flag = false;
			// printf ("x:%d a[i]:%d  flag:%d\n", x, a[i], flag);
		}
		cout << x << endl;
	}

	return 0;
}