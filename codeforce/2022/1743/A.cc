#include <iostream>
using namespace std;
using ll = long long;

int a[20];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int cnt = 10;
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			cnt--;
		}
		cout << cnt*(cnt-1)*3 << endl;
	}
	return 0;
}