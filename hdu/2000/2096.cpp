#include <iostream>

const int MOD = 100;
using namespace std;

int main() {
	int t, a, b;

	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << (a % MOD + b % MOD) % MOD << endl;
	}

	return 0;
}