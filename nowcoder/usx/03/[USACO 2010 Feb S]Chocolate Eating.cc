#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

const ll N = 1000010;

ll n, m, k;
ll b[N];
ll a[N];

bool check (ll x) {
	ll len = 0, sum = 0;
	for (ll i = 1; i <= m; ++i) {
		while (sum < x) {
			sum += a[++len];
			if (len > n) return false;
			if (x == k) b[len] = i;
		}
		sum /= 2;
	}
	return true;
}

int main() {
	cin >> n >> m;
	for(ll i = 1; i <= n; ++i) scanf("%lld", &a[i]);

	ll l = 1, r = 1e12;
	while (l <= r) {
		ll mid = (l+r) / 2;
		if (check (mid)) l = mid+1;
		else r = mid-1;
	}
	k = l-1;
	printf ("%lld\n", k);
	check(k);
	for (ll i = 1; i <= n; ++i){
		if (b[i]) printf("%lld\n", b[i]);
		else printf("%lld\n", m);
	}
	return 0;
}