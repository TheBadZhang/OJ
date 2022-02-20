#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
 
using namespace std;
using ll = long long;

const int N = 1000100;

int n,m;

int rest[N],need[N],diff[N],rr[N],ll[N],d[N];

bool check (int x) {
	memset (diff, 0, sizeof(diff));
	for (int i = 1; i <= x; i++) {
		diff [ll [i]] += d[i];
		diff [rr [i]+1] -= d[i];
	}
	for (int i = 1; i <= n; i++) {
		need[i] = need[i-1] + diff[i];
		if (need[i] > rest[i]) return false;
	}
	return true;
}
int main () {
	scanf ("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf ("%d", &rest[i]);
	for (int i = 1; i <= m; i++) scanf ("%d%d%d", &d[i], &ll[i], &rr[i]);
	if (check (m)) {
		printf("0");
		return 0;
	}
	int l = 1, r = m;
	while (l <= r) {
		int mid = (l+r)/2;
		if (check(mid)) l = mid+1;
		else r = mid-1;
	}
	printf("-1\n%d", l);
	return 0;
}