// 类似于 [NOIP2005]校门外的树
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define FOR(i,s,e) for (int i = s; i < e; ++i)

int main() {

	int l, m;
	scanf ("%d %d", &l, &m);
	vector<pair<int, int>> s(m);

	int x, y;
	FOR (i, 0, m) {
		scanf("%d %d", &x, &y);
		s[i] = make_pair(x, y);
	}

	sort (s.begin(), s.end());

	int sum = s[0].second - s[0].first + 1, end = s[0].second;

	FOR (i,1,m) {
		if (s[i].first > end) {
			sum += s[i].second - s[i].first + 1;
			end = s[i].second;
		} else if (s[i].second >= end) {
			sum += s[i].second - end;
			end = s[i].second;
		}
	}

	printf("%d\n", l - sum + 1);
	return 0;
}