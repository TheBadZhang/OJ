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


int wheel[111];

int n, n2, m;
int main () {

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> wheel[i];
		}
		for (int i = 0; i < n; i++) {
			int l;
			string str;
			cin >> l >> str;
			int d = 0, u = 0;
			for (int j = 0; j < l; j++) {
				if (str[j] == 'D') d++;
				else u++;
			}
			// printf ("u:%d d:%d\n", u, d);
			wheel[i] -= u-d;
			wheel[i] = (wheel[i]+10) % 10;
		}

		printf ("%d", wheel[0]);
		for (int i = 1; i < n; i++) {
			printf (" %d", wheel[i]);
		}
		puts("");
		// printf ("%d", -1 % 10);
	}

	return 0;
}