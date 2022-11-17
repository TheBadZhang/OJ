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
		cin >> str;
		// cout << "Main string: " << my_str << endl;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		if (str == "yes") cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}