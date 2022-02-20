#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

const int N = 100010;
int n, ans;
int a[N], b[N];

bool check (int now) {
	if (now == 1) return true;
	for (int i = 1; i < now; i++) b[i] = a[i];
	sort (b+1, b+now);
	int limit = n-now;
	for (int i = 1; i < now; i++) {
		if (b[i] > limit) {
			return false;
		}
		limit++;
	}
	return true;
}

int main () {
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++) scanf ("%d", &a[i]);
	int l = 0, r = n;
	while (l <= r) {
		int mid = (l+r)/2;
		if (check(mid)) l = mid+1;
		else r = mid-1;
	}
	
	printf("%d\n", n-l+1);
	
	return 0;
}
