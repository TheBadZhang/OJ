#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>
#include <deque>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)


deque<int> q;
int main() {
	int n, m, x, y;
	scanf ("%d %d", &n, &m);
	while (m--) {
		scanf("%d", &x);
		switch (x) {
			case 1: {
				scanf("%d", &y);
				q.push_front(y);
			} break;
			case 2: q.pop_front(); break;
			case 3: {
				scanf("%d", &y);
				q.push_back(y);
			} break;
			case 4: q.pop_back(); break;
			case 5: reverse(q.begin(), q.end()); break;
			case 6: {
				printf("%d\n", q.size());
				for (const int& i : q) printf("%d ", i);
				puts("");
			} break;
			case 7: sort(q.begin(), q.end()); break;
		}
	}
}
