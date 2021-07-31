#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int a, b, c;
		cin >> a >> b >> c;
		int x;
		for (x = 1000; x <= 9999; x++) {
			if (x % a == 0 && (x + 1) % b == 0 && (x + 2) % c == 0) {
				cout << x << endl;
				break;
			}
		}
		if (x > 9999)
			cout << "Impossible" << endl;
	}
	return 0;
}