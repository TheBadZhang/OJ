#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main () {

	int t;
	cin >> t;
	while (t--) {
		ll n, check = 0, apr = 0;
		cin >> n;
		ll cnt = 0;
		string s;
		cin >> s;
		map<char, ll> mp;
		set<char> se;

		for (int i = 0; i < s.size(); i++) {
			check = 0;
			apr = 0;
			mp.clear();
			se.clear();

			for (int j = i; j < s.size(); j++) {
				mp[s[j]] ++;
				apr = max (apr, mp[s[j]]);
				se.insert(s[j]);

				if (apr <= se.size()) cnt++;
				if (apr > 10) break;
			}
		}

		cout << cnt << endl;
	}

}
