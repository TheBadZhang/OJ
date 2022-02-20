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
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	vector<int> biggest(n, v[n - 1]);
	for (int i = n - 2; i >= 0; i--)
		biggest[i] = max(biggest[i + 1], v[i]);

	vector<int> ans;
	stack<int> s;

	for (int i = 0; i < n; i++) {
		s.push(v[i]);
		while (!s.empty() && s.top() > biggest[i + 1]) {
			ans.push_back(s.top());
			s.pop();
		}
	}
	while (!s.empty()) {
		ans.push_back(s.top());
		s.pop();
	}
	for (auto &num : ans) cout << num << " ";
	cout << endl;
	return 0;
}
