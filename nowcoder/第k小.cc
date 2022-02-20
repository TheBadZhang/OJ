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


priority_queue<int, vector<int>, less<int>>    q1; //大根堆
priority_queue<int, vector<int>, greater<int>> q2; //小根堆

int n, m, k, x, op;
int main() {
	cin >> n >> m >> k;
	FOR(i,1,n) {
		cin >> x;
		if (q2.empty() || x < q2.top()){
			q1.push(x);
			if (q1.size() == k)
				q2.push(q1.top()), q1.pop();
		} else q2.push(x);
	}

	while (m--) {
		cin >> op;
		if (op == 1) {
			cin >> x;
			q1.push(x);
			if (q1.size() == k) {
				q2.push(q1.top());
				q1.pop();
			}
		} else {
			if (q2.empty()) puts("-1");
			else printf("%d\n", q2.top());
		}
	}
	return 0;
}
