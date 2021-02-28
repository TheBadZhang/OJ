
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int gcd(int a, int b, int & x, int & y) {
	int x1, y1;
	if(a < b) {
		return gcd(b, a, y, x);
	}
	if(b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	int g = gcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - floor(a / b) * y1;
	return g;
}
int main(void) {
	int a, b;
	while(cin >> a >> b) {
		int x, y;
		int g = gcd(a, b, x, y);
		cout << x << " " << y << " " << g << endl;
	}
	return 0;
}