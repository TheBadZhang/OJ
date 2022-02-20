#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)


int out[50009];
int main () {

	int T;
	cin >> T;
	while (T--) {
		map<string, int> mp;
		int no = 0;	 //入队时候的编号
		int cnt = 0; //出队时候的计数
		int n;
		cin >> n;
		FOR0(i,0,n) {
			string name, option;
			cin >> option >> name;
			if (option == "in") {
				mp[name] = no++;
			} else {
				out[cnt++] = mp[name];
			}
		}
		mp.clear();
		stack<int> s;
		int pos = 0;
		FOR0(i,0,n/2) {
			if (!(s.empty() || out[pos] > s.top())) {
				while (!s.empty() && out[pos] <= s.top()) s.pop();
			}
			s.push(out[pos++]);
		}
		cout << s.size() << endl;
	}
	return 0;
}
