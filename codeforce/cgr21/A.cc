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

int a[100100];
int shoes_size [100100];

int main () {

	int T;
	cin >> T;
	while (T--) {
		int n;
		long long z, a;
		cin >> n >> z;
		long long maxi = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			a = (a | z);
			if (a > maxi) maxi = a;
		}
		cout << maxi << endl;
	}

	return 0;
}