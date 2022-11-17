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
int counts[100100];

int main () {

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;
		int k;
		for (int i = 1; i <= n; i++) {
			a [i] = -1;
			counts[i] = 0;
		}
		for (int i = 1; i <= n; i++) {
			cin >> k;
			if (a[k] == -1) {
				a[k] = i;
				counts [k] = 1;
			} else if ((i-a[k]-1) % 2 == 0) {
				a[k] = i;
				counts[k] ++;
			}
				// printf ("%d:%d:%d\n", k, counts[k], a[k]);
		}
		printf ("%d",counts[1]);
		for (int i = 2; i <= n; i++) {
			printf (" %d", counts[i]);
		}
		puts("");
	}

	return 0;
}