#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int maximal = INT_MIN;

		int mi = 0, mj = 0;
		int k;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> k;
				if (k > maximal) {
					maximal = k;
					mi = i;
					mj = j;
				}
			}
		}
		printf ("%d\n", max(mi+1, n-mi)*max(mj+1, m-mj));
	}



	return 0;
}