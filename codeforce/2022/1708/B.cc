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
int gcd(int x, int y) {
	while(y^=x^=y^=x%=y);
	return x;
}


int a[100100];

int main () {

	int T;
	cin >> T;

	while (T--) {
		int n, l, r;
		cin >> n >> l >> r;
		// cout << gcd()
		int c = 1;
		while (c <= n) {
			bool flag = false;
			// printf ("l:%d, r:%d\n", l, r);
			int i = l/c*c;
			if (i < l) i += c;
			for (; i <= r; i++) {
				// if (gcd(c, i) == c) {
				if (i % c == 0) {
					a[c++] = i;
					flag = true;
					break;
				}
			}
			if (flag == false) break;
		}
		if (c != n+1) {
			cout << "NO" << endl;
		} else {
			printf ("YES\n%d", a[1]);
			for (int i = 2; i < c; i++) {
				printf (" %d", a[i]);
			}
			puts("");
		}
	}

	return 0;
}