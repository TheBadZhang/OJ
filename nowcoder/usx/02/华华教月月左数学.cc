#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
#include <list>
#include <cctype>

using namespace std;
using ll = long long;

#define MOD_MUL
#ifdef MOD_MUL
ll mul(ll a, ll b, ll p) {
	ll ans = 0;
	while (b) {
		if (b & 1) ans = (ans + a) % p;
		a = (a + a) % p;
		b >>= 1;
	}
	return ans;
}
#else
#define mul(a,b,p) (a*b)%p
#endif

ll qpow(ll a, ll b, ll p) {
	ll ans = 1;
	while (b) {
		if (b & 1) ans = mul(ans,a,p);
		a = mul(a,a,p);
		b >>= 1;
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll a, b, p;
		cin >> a >> b >> p;
		cout << qpow(a, b, p) << endl;
	}

	return 0;
}