#include <iostream>
#include <cmath>
using namespace std;
const int MAXL = 20;

int power[MAXL]; //2的幂

int main() {
	for (int i = 0; i < MAXL; i++) {
		power[i] = (int)pow(2, i);
	}

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int i;
		for (i = 0; i < MAXL; i++) {
			if (n % power[i] == 0 && (n / power[i]) % 2 == 1)
				break;
		}
		cout << n / power[i] << " " << i << endl;
	}
	return 0;
}