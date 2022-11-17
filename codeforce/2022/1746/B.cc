#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int n, a[100002];
int main () {

	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int i = 0, j = n-1;
		int res = 0;

		while (i < j) {
			if (a[j] == 1) {
				j --;
				if (a[i] == 0) i++;
			} else {
				if (a [i] == 1) {
					res ++;
					j--;
					i++;
				} else {
					i++;
				}
			}
		}

		if (i <= j && a[i] > a[j]) res ++;

		cout << res << endl;
	}

	return 0;
}