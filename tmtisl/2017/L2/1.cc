#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)
#define ROF0(x, b, e) for (int x = b; x > e; --x)

ll num[100100];

int main () {

	ll n;
	cin >> n;
	FOR0(i,0,n) cin >> num[i];
	sort (num, num+n);
	ll m = n-(n+1)/2;
	ll introvert = accumulate(num, num+m, (ll)0);
	ll outgoing = accumulate(num+m, num+n, (ll)0);
	printf ("Outgoing #: %lld\nIntroverted #: %lld\nDiff = %lld\n", n-m, m, abs(outgoing-introvert));

	return 0;
}