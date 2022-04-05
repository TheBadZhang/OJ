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

bool check (vector<ll> &v, int n) {
	bool flag = true;
	FOR(i,3,n) {
		if (v[i] == v[i-1] + v[i-2]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		printf ("%lld", v[1]);
		FOR(i,2,n) printf (" %lld", v[i]);
		puts("");
	}
	return flag;
}


int main () {

	int t;
	cin >> t;
	string str;
	vector<ll> v(100);
	while (t--) {
		int n;
		cin >> n;
		FOR(i,1,n) {
			v[i] = i;
		}
		if (n > 3) swap(v[3],v[4]);
		int count = 0;
		do {
			if (check(v,n)) count ++;
		} while (count < n && next_permutation(v.begin()+1, v.begin()+n+1));
	}


	return 0;
}