#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>
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

const int N = 5e4 + 7;
int f[N * 3];

int search(int x) {
	return f[x] == x ? x : f[x] = search(f[x]);
}

void merge (int a, int b) {
	f[search(a)] = search(b);
}

int main () {
	int op, x, y;
	int n = read(), k = read();
	int ans = 0;
	FOR(i,1,3*n) f[i] = i;
	FOR(i,1,k) {
		scanf ("%d %d %d", &op, &x, &y);
		if (x > n || y > n) {
			++ans;
			continue;
		}
		if (op & 1) {
			if (search(x) == search(y + n) or search(x) == search(y + n + n)) {
				++ans;
				continue;
			}
			merge (x, y);
			merge (x + n, y + n);
			merge (x + n + n, y + n + n);
		} else {
			if (search(x) == search(y) or search(x) == search(y + n + n)) {
				++ans;
				continue;
			}
			merge (x, y + n);
			merge (x + n, y + n + n);
			merge (x + n + n, y);
		}
	}
	cout << ans << endl;
	return 0;
}
