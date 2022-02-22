#include <iostream>
using ll = long long;
using namespace std;
#define FOR(x, s, e) for (int x = s; x <= e; x++)
#define FOR2(x, s, e) for (int x = s; x < e; x++)

int main () {
	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		int t = n*k;
		if (k == 1) {
			cout << "YES" << endl;
			FOR(i,1,n) {
				cout << i << endl;
			}
		} else if (t/2%k == 0) {
			cout << "YES" << endl;
			int p = t/2;
			while (p > 0) {
				printf ("%d", 2*p-1);
				p--;
				FOR(i,2,k) {
					printf (" %d", 2*p-1);
					p--;
				}
				cout << endl;
			}
			p=t/2;
			while (p > 0) {
				printf ("%d", 2*p);
				p--;
				FOR(i,2,k) {
					printf (" %d", 2*p);
					p--;
				}
				cout << endl;
			}
			
		} else {
			cout << "NO" << endl;
		}
	}
}
