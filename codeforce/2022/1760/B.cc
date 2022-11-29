#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n;
		cin >> s;
		int mmax = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] > mmax) mmax = s[i];
		}
		cout << mmax - 'a'+1 << endl;
	}

	return 0;
}