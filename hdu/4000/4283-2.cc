#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

	int T;
	cin >> T;
	for (int a = 1; a <= T; a++) {
		int n;
		cin >> n;
		vector<int> l;
		for (int i = 0; i < n; i++) {
			int j;
			scanf("%d", &j);
			l.push_back(j);
		}
		sort (l.begin(), l.end());
		long long r = 0;
		for (int i = 0; i < l.size(); i++) {
			r += l[i]*i;
		}
		printf ("Case #%d: %lld", a, r);
	}


	return 0;
}