
#include<iostream>
using namespace std;
int GCD (int a, int b) {
	return b ? GCD (b, a%b) : a;
}
int LCM (int a, int b) {
	return a/GCD (a, b)*b;
}
int main() {
	int m, n, i, last, a;
	cin >> m;
	while(m--) {
		cin >> n;
		last = 1;
		for (i = 0; i < n; i++) {
			cin >> a;
			last = LCM (a, last);
		}
		cout << last << endl;
	}
	return 0;
}