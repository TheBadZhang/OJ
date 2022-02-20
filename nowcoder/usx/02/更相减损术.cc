#include <iostream>
#include <bitset>

using namespace std;
using ll = long long;

// 更相减损法
int gcd(int a, int b) {
	if (a == b) {
		return a;
	} else if (a > b) {
		a = a - b;
	} else {
		b = b - a;
	}
	return gcd(a, b);
}


int main () {

	int a, b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;

	return 0;
}