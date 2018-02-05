#include <bits/stdc++.h>
using namespace std;
int n, k, a[10005], l, r, m;
double x;
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &x);
		a[i] = x * 100;
		m = max(m, a[i]);
	}
	l = 0;
	r = m + 1;
	while (l + 1 < r)
	{
		int t = 0, mid = (l + r) / 2;
		for (int i = 0; i < n; i++)
			t += a[i] / mid;
		if (t < k)
			r = mid;
		else
			l = mid;
	}
	printf("%.2lf", l * 1.0 / 100);
	return 0;
}