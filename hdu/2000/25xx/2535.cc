#include <iostream>
using namespace std;

int main() {
	int n;

	while (cin >> n && n) {
		int i, j, sum = 0, t, k, a[105] = {0};
		for (i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (i = 1; i < n; i++) {
			k = i;
			for (j = i; j <= n; j++)
			{
				if (a[k] > a[j])
					k = j;
			}
			t = a[k];
			a[k] = a[i];
			a[i] = t;
		}
		for (i = 1; i <= n / 2 + 1; i++)
			sum = a[i] / 2 + 1 + sum;
		cout << sum << endl;
	}
	return 0;
}
