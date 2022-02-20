#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <cmath>

using namespace std;


const int N=200010;

int n,m,mx=-1,mn=INT_MAX;
int w[N],v[N],ll[N],rr[N];
long long pn[N],pv[N];
long long Y,s,sum,ans=LLONG_MAX;

bool check(int x) {
	Y = 0, sum = 0;
	memset (pn, 0, sizeof(pn));
	memset (pv, 0, sizeof(pv));
	for (int i = 1; i<= n; i++) {
		if (w[i] >= x) {
			pn[i] = pn[i-1]+1;
			pv[i] = pv[i-1]+v[i];
		} else {
			pn[i] = pn[i-1];
			pv[i] = pv[i-1];
		}
	}
	for (int i = 1; i <= m; i++) {
		Y += (pn[rr[i]]-pn[ll[i]-1]) * (pv[rr[i]]-pv[ll[i]-1]);
	}

	sum = llabs(Y-s);
	if (sum < ans) ans = sum;
	return Y > s;
}
int main () {

	scanf ("%d %d %lld", &n, &m, &s);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &w[i], &v[i]);
		mx = max (mx, w[i]);
		mn = min (mn, w[i]);
	}
	for (int i = 1; i <= m; i++) scanf("%d %d", &ll[i],&rr[i]);
	
	int l = mn-1, r = mx+2, mid;
	while (l <= r) {
		mid = (l+r)/2;
		if (check (mid)) l = mid+1;
		else r = mid-1;
	}
	printf("%lld\n",ans);
	return 0;
}