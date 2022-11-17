#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)
#define ROF0(x, b, e) for (int x = b; x > e; --x)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

inline ll read(){
	ll s = 0, w = 1; char ch = getchar();
	while (ch < 48 || ch > 57) { if (ch == '-') w = -1; ch = getchar(); }
	while (ch >= 48 && ch <= 57) s = (s << 1) + (s << 3) + (ch ^ 48), ch = getchar();
	return s * w;
}
long long mypow(int base, int a) {
	long long i = 1;
	while (a--) i*=base;
	return i;
}
long long gcd(long long x, long y) {
	while(y^=x^=y^=x%=y);
	return x;
}

void solve();
#define MULTI_INPUT
int main () {
	std::ios::sync_with_stdio(false);
	cin.tie(0);
#ifdef MULTI_INPUT
	int T;
	cin >> T;
	while (T--) solve();
#else
	solve();
#endif
	return 0;
}


ll a[100100];
ll b[100100];
ll c[100100];

void solve() {
	string str;
	cin >> str;
	if (str[0] == '?') str[0] = '(';
	if (str[str.size()-1] == '?') str[str.size()-1] = ')';
	stack<char> s;
	bool flag = true;
	for (int i = 0 ; i < str.size(); i++) {
		if (s.size()>0) {
			if (str[i] == ')') {
				if (s.top() == '(') {
					s.pop();
				} else {
					s.push(')');
				}
			} else {
				s.push(str[i]);
			}
		} else {
			if (str[i] == ')') {
				flag = false;
				i = str.size();
			// } else if (str[i] == '?') {
			// 	s.push('(');
			} else {
				s.push('(');
			}
		}
	}
	int lq = 0, rq = 0, qq = 0;
	vector<char> str2(s.size());
	for (int i = str2.size()-1; i >= 0 ; i--) {
		str2[i] = s.top();
		switch(str2[i]) {
			case '(': lq++;break;
			case ')': rq++;break;
			case '?': qq++;break;
		}
		s.pop();
	}
	if (abs(lq-rq) != qq) flag = false;
	if (abs(abs(lq-rq)-qq) % 2 == 1) false;

	printf("(:%d\t):%d\t?:%d\n", lq, rq, qq);
	for (int i = 0; i < str2.size(); i++) {
		printf("%c", str2[i]);
	}
	// if (str2.size() > 0) flag = false;
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
}