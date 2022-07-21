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

int a[500100];
int b[500100];


int n, n2, m;
int main () {

	int T;
	cin >> T;
	while (T--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			a[i] = read();
		}
		cin >> n2;
		for (int i = 0; i < n2; i++) {
			b[i] = read();
		}
		// turn();

		for (int i = 0, j = 0;i < n || j < n2;i++,j++) {
			if (a[i] != b[j]) {
				if (a[i] > b[j]) {
					if (a[i]%m == 0 && b[j]%(a[i]/m) == 0) {
						j++;
						a[i] -= b[j];
					} else {
						goto failed;
					}
				} else {
					if (b[j]%m == 0 && a[i]%(b[j]/m) == 0) {
						i ++;
						b[j] -= a[i];
					} else {
						goto failed;
					}
				}
			}
		}
		cout << "Yes" << endl;
		goto sucess;
failed:
		cout << "No" << endl;
sucess:
;
	}

	return 0;
}