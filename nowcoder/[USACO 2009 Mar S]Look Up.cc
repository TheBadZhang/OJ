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
#define ROF0(x, b, e) for (int x = b; x > e; --x)
const int N = 1e6 + 10;

int h[N];
deque<int> q;
stack<int> s;
int main() {
	int n;
	cin >> n;
	FOR(i,1,n) cin >> h[i];
	ROF0(i,n,0) {
		while (!q.empty() && h[q.front()] <= h[i]) q.pop_front();
		if (q.empty()) s.push(0);
		else s.push(q.front());
		q.push_front(i);
	}
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}
