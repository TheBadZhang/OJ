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


int main () {

	int T;
	cin >> T;
	while (T--) {
		int n;
		string ts;
		set<string> ss;
		vector<string> sv;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> ts;
			ss.insert(ts);
			sv.push_back(ts);
		}
		for (int i = 0; i < n; i++) {
			// cout << sv[i] << endl;
			bool flag = true;
			for (int j = 0; j < sv[i].size()-1; j++) {
				string a = sv[i].substr(0, j+1);
				string b = sv[i].substr(j+1);
				// cout << a << "\t" << b << endl;
				if (ss.count (a) && ss.count(b)) {
					putchar('1');
					flag = false;
					break;
				}
			}
			if (flag) putchar('0');
		}
		puts("");
	}

	return 0;
}