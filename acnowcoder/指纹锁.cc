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

int n, k, x;
string s;
struct cmp {
	bool operator()(const int &a, const int &b) const {
		return abs(a - b) <= k ? false : a < b;
	}
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	cin >> n >> k;
	set<int, cmp> st;
	while (n--) {
		cin >> s >> x;
		if (s[0] == 'a')
			st.insert(x);
		else if (s[0] == 'd')
			st.erase(x);
		else {
			if (st.find(x) != st.end())
				cout << "Yes" << '\n';
			else
				cout << "No" << '\n';
		}
	}
	return 0;
}
