#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)


stack<string> s;
int main() {

	int q;
	while (cin >> q) {
		string str;
		s.push(str);
		FOR(i,1,q) {
			int t;
			cin >> t;
			switch (t) {
				case 1: {
					string t;
					cin >> t;
					str += t;
					s.push(str);
				} break;
				case 2: {
					int k;
					cin >> k;
					str=str.substr(0,str.size()-k);
					s.push(str);
				} break;
				case 3: {
					int k;
					cin >> k;
					cout << str[k-1] << endl;
				} break;
				case 4: {
					s.pop();
					str = s.top();
				} break;
			}
		}
	}

	return 0;
}
