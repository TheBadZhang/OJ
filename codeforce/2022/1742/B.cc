#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n-1; i++) {
		if (a[i] == a[i+1]) {
			cout << "NO" << endl;
			return ;
		}
	}
	cout << "YES" << endl;
}


int main () {

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}