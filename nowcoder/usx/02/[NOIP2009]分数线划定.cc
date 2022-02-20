#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;


struct COMPET {
	int k, s;
	COMPET () {
		cin >> k >> s;
	}
	friend bool operator<(const COMPET& a, const COMPET& b) {
		return a.s == b.s ? a.k < b.k : a.s > b.s;
	}
};



int main () {

	int n, m;
	cin >> n >> m;
	vector<COMPET> v(n);
	sort (v.begin(), v.end());
	int man_limit = v[floor(m*1.5)-1].s;
	int i = 0;
	while (v[++i].s >= man_limit);
	v.erase (v.begin()+i, v.end());
	printf ("%d %d\n", man_limit, v.size());
	for (const COMPET& s : v) {
		printf ("%d %d\n", s.k, s.s);
	}


	return 0;
}