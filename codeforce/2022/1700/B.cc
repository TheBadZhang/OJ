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
/*
inline ll _pow(ll a, ll b) {
	return _
}*/


int main () {

	int t;
	cin >> t;
	string str;
	while (t--) {
		int n;
		string num_i;
		cin >> n >> num_i;
		bool leading_zero = true;
		string num_o('0', num_i.size());
		for (size_t i = 0; i < num_i.size()/2; i++) {
			num
		}
	}


	return 0;
}