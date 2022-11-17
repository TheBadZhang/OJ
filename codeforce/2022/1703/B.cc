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
		string str;
		int n;
		cin >> n >> str;
		bool flag [128] = {0};
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (flag[str[i]]) {
				count ++;
			} else {
				flag[str[i]] = true;
				count += 2;
			}
		}
		cout << count << endl;
	}

	return 0;
}