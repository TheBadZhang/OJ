
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int T, n, a [1000], i, j;
	cin >> T;
	while (T--) {
		cin >> n;
		for (i = 0; i < n; i++)
			cin >> a[i];
		sort (a, a + n);
		cout << a[0];
		for (i = 1; i < n; i++)
			cout << " " << a[i];
		cout << endl;
	}
	return 0;
}