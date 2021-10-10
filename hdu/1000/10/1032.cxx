#include <iostream>

using namespace std;

int main() {
	int i, j;
	while (cin >> i >> j) {
		int maxn = 0;
		cout << i << " " << j << " ";
		if (i > j)
			swap(i, j);
		for (int k = i; k <= j; k++) {
			int temp = k;
			int count = 1;
			while (temp != 1) {
				count++;
				if (temp & 1)
					temp = 3 * temp + 1;
				else
					temp /= 2;
			}
			maxn = max(maxn, count);
		}
		cout << maxn << endl;
	}
	return 0;
}