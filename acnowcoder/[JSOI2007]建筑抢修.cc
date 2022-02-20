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

const int N = 2e5;

int main () {

	int n;
	cin >> n;
	pair<ll,ll> p[N];
	FOR(i,1,n) scanf("%lld%lld", &p[i].first, &p[i].second);
	sort(p + 1, p + 1 + n, [](auto& a, auto& b) { return a.second < b.second; });
	priority_queue<int> q;
	ll sum = 0, ans = 0;
	FOR(i,1,n) {
		if (sum + p[i].first <= p[i].second) {
			ans++;
			sum += p[i].first;
			q.push(p[i].first);
		} else if (q.top() > p[i].first) {
			sum -= q.top();
			q.pop();
			sum += p[i].first;
			q.push(p[i].first);
		}
	}
	cout << ans << endl;
	return 0;
}
