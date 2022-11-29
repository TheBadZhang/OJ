#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main () {

	int t;
	cin >> t;

	while (t--) {
		ll a, b, c;
		cin >> a >> b >> c;
		if (a > b) swap(a, b);
		if (b > c) swap(b, c);
		if (a > b) swap(a, b);
		cout << b << endl;
	}


	return 0;
}