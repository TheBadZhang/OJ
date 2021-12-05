#include <iostream>
using namespace std;
int main() {
	int i, t, n, j, k, f;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1, j = 1; i <= n; cout << endl, i++, j++) {
			f = i;
			for (k = 1; k <= n; i += j, k++)
				if (k == n)
					cout << i;
				else
					cout << i << " ";
			i = f;
		}
	}
	return 0;
}