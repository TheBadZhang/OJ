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


char m[111][111];


int main () {

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			getchar();
			for (int j = 0; j < n; j++) {
				m[i][j] = getchar();
			}
		}
		int count = 0;
		for (int i = 0; i <= (n-1)/2; i++) {
			for (int j = 0; j < n/2; j++) {
				int s = m[i][j] + m[n-i-1][n-j-1] + m[j][n-i-1] + m[n-j-1][i];
				if (s == '0'+'0'+'0'+'1' || s == '1'+'1'+'1'+'0') {
					count ++;
				} else if (s == '0'+'0'+'1'+'1' || s == '1'+'1'+'0'+'0') {
					count += 2;
				}
			}
		}
		// for (int i = 0; i < n; i++) {
		// 	for (int j = 0; j < n; j++) {
		// 		putchar(m[i][j]);
		// 	}
		// 	putchar('\n');
		// }
		cout << count << endl;
	}

	return 0;
}