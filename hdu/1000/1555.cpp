
#include <iostream>
using namespace std;

int main() {
	int M, k;
	while (cin >> M >> k) {
		if (M == 0 && k == 0)
			break;

		int total = 0;
		int a = M, b = 0;
		while (a != 0) {
			total += a;
			a = M / k;
			b = M % k;
			M = a + b;
		}
		cout << total << endl;
	}
	return 0;
}