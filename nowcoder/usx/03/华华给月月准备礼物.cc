#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
#include <list>
#include <cctype>

using namespace std;
using ll = long long;


int main() {
	
	int N, K;
	cin >> N >> K;
	vector<ll> v(N);
	for (int i = 0; i < N; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll l = 1, r = 1e9 + 10, m = 0, ans;
	while (l <= r) {
		m = (l+r)/2;
		// 计算
		ans = 0;
		for (auto it = lower_bound(v.begin(), v.end(), m); it != v.end(); ++it) {
			ans += (*it) / m;
		}
		// printf ("%lld %lld %lld\n", l, r, ans);
		if (ans >= K) {
			l = m+1;
		} else {
			r = m-1;
		}
	}

	cout << r;

	return 0;
}