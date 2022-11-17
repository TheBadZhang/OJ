#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
	char g[10][10];
	int count[8] = {0};
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> g[i][j];
			if (g[i][j] == 'R') {
				count[i]++;
			}
		}
	}

	bool flag = false;
	for (int i = 0; i < 8; i++) {
		if (count [i] == 8) {
			flag = true;
			break;
		}
	}

	cout << (flag?'R':'B') << endl;
}


int main () {

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}