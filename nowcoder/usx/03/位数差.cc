#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
 
using namespace std;
using ll = long long;
const int N = 100100;
int a[N];
ll b[] = { 10,100,1000,10000,100000,1000000,10000000,100000000,1000000000 };

ll calc(int l,int r) {
	if (r-l == 1) return 0;
	int mid = (l + r) / 2;
	ll ans = calc(l, mid) + calc(mid, r);
	sort(a + mid, a + r);
	for (int i = l; i < mid; i++) {
		for (int j = 0; j < 9; j++) {
			if (b[j] - a[i] > 0) {
				ans += r - distance(a, lower_bound(a + mid, a + r, b[j] - a[i]));
			}
		}
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) scanf ("%d", &a[i]);
	cout << calc(1, n + 1) << endl;
	return 0;
}