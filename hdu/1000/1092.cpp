#include <iostream>
using namespace std;
int main () {
	int n;
	while (cin >> n) {
		if (n==0)break;
		int a, sum;
		sum = 0;
		for (int i=0;i<n;i++) {
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
	return 0;
}