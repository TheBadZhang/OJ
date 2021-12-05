
/* HDU2503 a/b + c/d */

#include <iostream>

using namespace std;

// 非递归计算最大公约数
int gcd(int m, int n) {
	return m%n?gcd (n,m%n):n;
}

int main() {
	int t, a, b, c, d;
	int numerator, decimal, gcdval;

	cin >> t;
	while(t--) {
		cin >> a >> b >> c >> d;

		numerator = a * d + b * c;
		decimal = b * d;

		gcdval = gcd(numerator, decimal);

		cout << numerator / gcdval << " " << decimal / gcdval << endl;
	}

	return 0;
}