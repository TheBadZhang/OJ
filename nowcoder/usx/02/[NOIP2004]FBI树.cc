#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
using ll = long long;

string str;

void f(int l, int r) {
	if (r > l) {
		f(l, (l + r) / 2);
		f((l + r) / 2 + 1, r);
	}
	int B = 1, I = 1, F;
	for (int i = l; i <= r; i++) {
		if (str[i] == '0') {
			I = 0;
		} else if (str[i] == '1') {
			B = 0;
		}
	}
	if (B) {
		cout << 'B';
	} else if (I) {
		cout << 'I';
	} else {
		cout << 'F';
	}
}
int main() {
	int n;
	cin >> n >> str;
	f(0, str.size()-1);
	return 0;
}
