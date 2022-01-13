#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int w, n, ans = 0;
	cin >> w >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort (a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (a[i]) {
			ans++;
			for (int j = n - 1; j > i; j--) {
				if (a[j] && a[i] + a[j] <= w) {
					a[j] = 0;
					break;
				}
			}
			a[i] = 0;
		}
	}
	cout << ans;
	return 0;
}
