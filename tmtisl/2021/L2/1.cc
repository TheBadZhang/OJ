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

int a[1010];

int main () {

	int n, m, k;
	cin >> n >> m >> k;
	while (k--) {
		FOR0(i,0,n) {
			cin >> a[i];
		}
		stack<int> p;
		int k1 = 1;  // 当前所需的序列值
		int i = 0;
		bool flag = false;
		while (k1<=n) {
			while (p.size() && p.top() == k1) {
				p.pop();
				k1++;
			}
			if (a[i] == k1) {
				i++;
				k1++;
			} else if (p.size () <= m) {
				p.push(a[i++]);
			}
			if (p.size() > m) {
				flag = true;
				break;
			}
		}

		if (flag) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}





	return 0;
}