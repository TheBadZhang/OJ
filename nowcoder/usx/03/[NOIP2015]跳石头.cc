#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
 
using namespace std;
using ll = long long;
 
int a[50010];
int N, M, L,ans;
 
bool check(int x) {
	int last = 0, cnt = 0;
	for (int i = 0; i < N; i++) {
		if (a[i] - last < x)
			cnt++;                   //比最大距离小就删除这个石头
		else
			last = a[i];
	}
	return cnt <= M;
}
 
int main () {

	scanf ("%d%d%d", &L, &N, &M);
	for (int i = 0; i < N; i++) scanf ("%d", &a[i]);
	a[N++] = L;

	int l = 0, r = L;
	while (l <= r) {
		int mid = (l+r) / 2;
		if (check (mid)) {
			ans = mid;
			l = mid + 1;
		} else r = mid - 1;
	}
	printf("%d\n", ans);
 
	return 0;
}