#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a > b) swap(a, b);
		if (b > c) swap(b, c);
		if (c == a+b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}