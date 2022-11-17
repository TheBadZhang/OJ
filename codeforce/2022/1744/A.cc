#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main () {

	int t;
	cin >> t;
	while (t--) {
		map<int, char> m;
		// map<char, int>m2;
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		string str;
		cin >> str;
		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (m.count(v[i]) == 0) {
				m[v[i]] = str[i];
			} else {
				if (m[v[i]] != str[i]) {
					flag = false;
				}
			}
		}
		if (flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}


	return 0;
}