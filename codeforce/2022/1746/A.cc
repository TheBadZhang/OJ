#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, k, j;
		int b = 0;
		cin >> n >> k;
		for (int i = 0;i < n; i++) {
			cin >> j;
			b += j==1;
		}
		if (b > 0) cout << "YES" << endl;
		else cout << "NO" << endl;

	}

	return 0;
}