#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;


vector<int> pp = {1, 10, 100, 1000};

int main () {
	int T, n;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;
		int zero = 0, ones = 0;
		for (const char& ch : str) {
			if (ch == '0') zero ++;
			else ones ++;
		}
		if (zero == ones) {
			printf ("%d\n", zero-1);
		} else {
			printf ("%d\n", min (zero, ones));
		}
	}
	return 0;
}
