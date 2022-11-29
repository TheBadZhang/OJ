#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		if (n == 1) {
			if (a == 1 && b == 1) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		} else if (n == 2) {
			if ((a == 0 && b == 0) || (a == 2 && b == 2)) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		} else if (n >= 3) {
			if (a+b+1 < n || (a==b && a+b == 2*n)) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}


	return 0;
}