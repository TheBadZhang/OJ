#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1.0);
int n, f, i, j;
double a[10005];
double x, low = 0.00, high = 0.00, mid = 0.00, ans = 0.00;

bool check(double ml)
{
	int i, bag = 0;
	for (i = 1; i <= n; i++)
	{
		bag += a[i] / ml;
		if (bag >= f + 1)
			return true;
	}
	return false;
}
int main()
{

	scanf("%d%d", &n, &f);

	for (i = 1; i <= n; i++)
	{
		scanf("%lf", &x);
		a[i] = PI * x * x;
		high = max(high, a[i]);
	}

	low = 0.0;

	while (low < high)
	{
		mid = (low + high) / 2.0000;
		if (check(mid))
		{
			ans = mid;
			low = mid + 0.00001;
		}
		else
			high = mid - 0.00001;
	}

	printf("%.3lf", ans);

	return 0;
}