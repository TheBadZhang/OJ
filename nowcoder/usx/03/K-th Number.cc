#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <climits>
 
using namespace std;
using ll = long long;

const int N = 100100;
long long m;
int n,k,a[N];
bool check (int x) {
	long long ans = 0;
	int j = 1, num = 0;
	for (int i = 1; i <= n; ++i) {
		if (a[i] >= x) ++num;
		if (num == k) {
			ans += n-i+1;
			while (a[j++] < x) {
				ans += n-i+1;
			}
			--num;
		}
	}
	return ans >= m;
}
int main () {
	int T;
	cin >> T;
	while (T--) {
		scanf ("%d %d %d", &n, &k, &m);
		for (int i = 1; i <= n; ++i) scanf ("%d", &a[i]);
		int l = 1, r = INT_MAX, mid;
		while (l <= r) {
			mid = (l+r)/2;
			if (check(mid)) l = mid+1;
			else r = mid-1;
		}
		printf("%d\n",l-1);
	}
	return 0;
}