#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main () {

	int t;
	cin >> t;
	while (t--) {

		int n = 0;
		int k;
		cin >> n;
		// cout << n << endl;
		// vector<int> v(n);
		int a = 0, b = -1;
		bool up = false;
		bool flag = true;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (i > 0) {
				if (a > b) {
					up = true;
				}
				if (a < b) {
					if (up) {
						flag = false;
						// break;
					}
				}
			}
			b = a;
		}
		if (flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}