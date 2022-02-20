#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int n, m, ans = 0;
int a[60];
bool check(int x) {
	int tot = 0;
	for (int i = 1; i <= n; i++) {
		tot += max (0, x-a[i]);
		if (tot>x || tot>m) return false;
	}
	return true;
}

int main () {
	scanf("%d %d",&n,&m);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	int l = 0, r = 1e9;
	while (l <= r) {
		int mid = (l+r)/2;
		if (check (mid)) {
			ans = mid;
			l = mid+1;
		} else r = mid-1;
	}
	printf ("%d", ans);
}
