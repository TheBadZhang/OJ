#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)


int main () {
	int n, m;
	while (cin >> n && n) {
		int num[n+1];
		while(cin >> num[1] && num[1]) {
			stack<int> s;
			int x = 1;
			FOR(i,2,n) cin >> num[i];
			FOR(i,1,n) for (s.push(i);!s.empty() && s.top() == num[x];x++) s.pop();
			if (s.size() == 0) cout << "Yes\n";
			else cout << "No\n";
		}
		cout << endl;
	}
	return 0;
}

