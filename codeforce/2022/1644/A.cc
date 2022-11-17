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
		cin >> str;
		bool r = false, g = false, b = false;
		bool flag = true;
		for (char ch:str) {
			switch (ch) {
				case 'r': {
					r = true;
				} break;
				case 'g': {
					g = true;
				} break;
				case 'b': {
					b = true;
				} break;
				case 'R': {
					if (!r) flag = false;
				} break;
				case 'G': {
					if (!g) flag = false;
				} break;
					case 'B': {
					if (!b) flag = false;
				} break;
			}
		}
		if (flag) {
			puts("YES");
		} else {
			puts("NO");
		}
	}


	return 0;
}