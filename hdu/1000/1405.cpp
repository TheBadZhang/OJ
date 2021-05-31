#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	int num = 1;
	while (cin >> n) {

		if (n <= 0)
			break;
		if (num > 1)
			cout << endl;
		cout << "Case " << num++ << "." << endl;
		if (n == 1)
			cout << 1 << " " << 1 << endl;
		for (int i = 2; i <= sqrt(n); i++) {
			int y = 0;
			while (n % i == 0) {
				n /= i;
				y++;
			}
			if (y)
				cout << i << " " << y << " ";
		}
		if (n != 1)
			cout << n << " " << 1 << " ";
		cout << endl;
	}
	return 0;
}