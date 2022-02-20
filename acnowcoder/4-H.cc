#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <string>
#include <unordered_map>

using ll = long long;
using namespace std;

string s1 = "";
queue<string> q;
unordered_map<string, string> d;

ll dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}; //方向
char dc[4] = {'u', 'r', 'd', 'l'};				   //方向代号

string bfs(string s) {

	q.push(s);
	d[s] = "";
	string ends = "12345678x";

	while (q.size()) {
		auto t = q.front();
		q.pop();
		if (t == ends) return d[t];

		ll pos = t.find('x');
		ll x = pos / 3, y = pos % 3;
		string dt = d[t];

		for (ll i = 0; i < 4; i++) {
			ll a = x + dir[i][0], b = y + dir[i][1];
			if (a >= 0 && a < 3 && b >= 0 && b < 3) {
				swap(t[a * 3 + b], t[pos]); //拓展方向
				if (!d.count(t)) {
					d[t] = dt + dc[i];
					q.push(t);
				}
				swap(t[a * 3 + b], t[pos]);
			}
		}
	}
	return "unsolvable"; //未找到，返回无解
}

int main() {
	char aa[2];
	for (ll i = 1; i <= 9; i++) {
		cin >> aa;
		s1 += *aa;
	}
	cout << bfs(s1);
	return 0;
}
