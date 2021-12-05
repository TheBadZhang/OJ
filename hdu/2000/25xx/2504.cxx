#include<bits/stdc++.h>
using namespace std;
int gcd (int a,int b) {
	return b?gcd(b,a%b):a;
}
int main () {
	int a,b,n;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		for (int i = b + 1; ; i ++) {
			if (gcd(a,i) == b) {
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}