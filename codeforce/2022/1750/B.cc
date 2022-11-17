#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		string st;
		cin >> st;
		ll x = 0;
		ll y = 0;
		ll ms1 = 0, ms0 = 0;
		ll j1 = 0, j0 = 0;
		for (int i = 0; i < st.length(); i++){
			if (st[i]=='0') {
				x++;
				j0++;
				ms0 = max(ms0,j0);
				j1 = 0;
			} else {
				y++;
				j1++;
				ms1 = max(ms1,j1);
				j0 = 0;
			}
		}
		ll ans1 = ms1*ms1;
		ll ans2 = ms0*ms0;
		ll ans3 = x*y;
		cout << max(ans1,max(ans2,ans3)) << "\n";
	}
	return 0;
}
