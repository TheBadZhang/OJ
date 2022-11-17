#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		long long m, n;
		cin >> n >> m;
		long long ans = n*(2*m+(n-1)*m)+m*(m-1);
		ans = ans / 2;
		cout << ans << endl;
	}
	return 0;
}