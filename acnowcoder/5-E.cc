#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)


int main () {

	string str;
	while (cin >> str) {
		stack<char> s;
		string ans;
		for (const char& ch:str) {
			if (s.size() > 0 && s.top() == ch) {
				s.pop();
				if (ch == 'o') {
					if (s.size() > 0 && s.top() == 'O') {
						s.pop();
					} else {
						s.push('O');
					}
				}
			} else {
				s.push(ch);
			}
		}
		while (s.size()) {
			ans.push_back(s.top());
			s.pop();
		}
		reverse(ans.begin(), ans.end());
		cout << ans << endl;
	}

	return 0;
}

