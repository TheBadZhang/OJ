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

ll maxseq (ll a[], int len, int k, int x) {
	int maxsum, maxhere;
	int count = 0;
	int maxcount = 0;
	maxsum = maxhere = 0;
	int maxl = 1, maxr = 0;
	int l = 1, r = 0;
	FOR(i,1,len) {
		if (maxhere <= 0) {
			maxhere = a[i];
			count = 0;
			if (a[i]<0 && count < k){
				maxhere += x;
				count = 1;
			}
			l = i;
			r = i;
		} else {
			r = i;
			if (a[i]<0 && count < k){
				maxhere += x;
				count ++;
			}
			maxr = i;
			maxhere += a[i];
		}
			printf("maxhere:%d, count:%d, k:%d\n", maxhere, count, k);
		if (maxhere > maxsum) {
			maxl = l;
			maxr = r;
			maxsum = maxhere;
			maxcount = count;
		}
	}
	printf ("maxr%d, maxl%d, maxount%d\n", maxr, maxl, maxcount);
	return maxsum+(maxr-maxl+1-maxcount)*x;
}

ll v[5050];

int main () {

	int t;
	cin >> t;
	string str;

	while (t--) {
		int n, x;
		cin >> n >> x;
		FOR(i,1,n) v[i]=read();
		printf ("%lld", maxseq(v, n, 0, x));
		FOR(k,1,n) printf (" %lld", maxseq(v, n, k, x));
		puts("");
	}


	return 0;
}