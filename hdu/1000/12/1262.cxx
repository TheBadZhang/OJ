#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

bool isPrime (int n) {
	for (int i = 3; i <= sqrt (n); i+=2) {
		if (n % i == 0) return false;
	}
	return true;
}

int main () {

	vector <int> primes = { 2, 3 };
	for (int i = 1; i < 1000; i++) {
		if (isPrime (6*i-1)) primes.push_back(6*i-1);
		if (isPrime (6*i+1)) primes.push_back(6*i+1);
	}
	int dst;
	while (cin >> dst) {
		int pos = distance (primes.begin(), lower_bound (primes.begin(), primes.end(), dst/2));
		int i = pos, j = pos;
		while (i >= 0 && j < primes.size ()) {
			if (primes [i] + primes [j] == dst) {
				cout << primes [i] << " " << primes [j] << endl;
				i = -1;
			} else if (primes [i] + primes [j] < dst) {
				j ++;
			} else {
				i --;
			}
		}
	}

	return 0;
}