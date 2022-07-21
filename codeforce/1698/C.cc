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

int a[500000];


int n, n2, m;
int main () {

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		set<int> s;
		int neg = 0, pos = 0, zero = 0;
		int negn = 0, posn = 0;
		for (int i = 0; i < n; i++) {
			a[i] = read();
			s.insert(a[i]);
			if (a[i] < 0) {
				neg ++;
				negn = a[i];
			} else if (a[i] > 0) {
				pos ++;
				posn = a[i];
			} else zero++;
		}
		bool flag = false;
		if (n == 3) if (s.count(a[0]+a[1]+a[2])) flag = true;
		if (neg == 0 && pos == 0) flag = true;
		else if (neg == 0 && pos == 1 || neg == 1 && pos == 0) flag = true;
		else if (neg == 1 && pos == 1 && negn == -posn) flag = true;

		if (flag) puts("YES");
		else puts("NO");
	}

	return 0;
}