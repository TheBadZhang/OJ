#include <iostream>
#include <cmath>
using namespace std;
int prime(int x) {
	int i;
	if (x <= 2) return 1;
	for (i = 2; i <= sqrt(x * 1.0); i++) {
		if (x % i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}
int main() {
	int n, m, count;
	while (cin >> n) {
		count = 0;
		for (int i = 0; i < n; i++) {
			cin >> m;
			if (prime(m))
				count++;
		}
		cout << count << endl;
	}
}