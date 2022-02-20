#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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

const int N = 1e6+10;
int w[N], h[N];
ll st_h[N], st_w[N], top;


int main() {

	int n;
	cin >> n;
	FOR(i,1,n) cin >> w[i];
	FOR(i,1,n) cin >> h[i];

	h[n + 1] = w[n + 1] = top = 0;
	ll ans = 0;
	FOR(i,1,n+1) {
		if (h[i] >= st_h[top]) {
			top++;
			st_h[top] = h[i];
			st_w[top] = w[i];
		} else {
			ll width = 0;
			while (top && h[i] <= st_h[top]) {
				width += st_w[top];
				ans = max(ans, width * st_h[top]);
				top--;
			}
			top++;
			st_h[top] = h[i];
			st_w[top] = width + w[i];
		}
	}

	cout << ans << endl;

	return 0;
}
