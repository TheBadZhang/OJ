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

const int N = 10005;

priority_queue<int> q;
int main() {
	int n, i, x, t, ans = 0;
	scanf("%d", &n);
	FOR(i,1,n) {
		scanf("%d", &x);
		q.push(-x);
	}
	while (--n) {
		t = 0;
		t -= q.top();
		q.pop();
		t -= q.top();
		q.pop();
		ans += t;
		q.push(-t);
	}
	printf("%d", ans);
	return 0;
}
