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
		vector<int> v(n);
		int a = 0, b = -1;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] >= a) {
				b = a;
				a = v[i];
			} else if (v[i] > b) {
				b = v[i];
			}
		}
		for (int i = 0; i < n; i++) {
			if (i) putchar(' ');
			if (v[i] == a) {
				cout << v[i] - b;
			} else {
				cout << v[i] - a;
			}
		}
		cout << endl;
	}

	return 0;
}