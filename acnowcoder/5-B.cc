#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <stack>

using ll = long long;
using namespace std;
#define FOR(x,s,e) for(int x=s;x<=e;x++)
#define FOR2(x,s,e) for(int x=s;x<e;x++)

int main () {
	string str;
	stack<char> stk;
	cin >> str;

	bool flag = true;
	for (const char& ch : str) {
		if (ch == 'a') {
			stk.push('a');
		} else if (stk.empty()) {
			flag = false;
			break;
		} else {
			stk.pop();
		}
	}


	if (flag && stk.empty()) cout << "Good" << endl;
	else cout << "Bad" << endl;

	return 0;
}
