#include <bits/stdc++.h>
#define N 100000 + 110
#define eps 1e-12
#define pi 3.1415926535897932384626433
using namespace std;
int b[N], sum, sum2, k;
int a[N], f;
int main()
{
	double lchu, t, c;
	cin >> lchu >> t >> c;
	double lhou = (1 + t * c) * lchu;
	double l = 0, r = pi;
	double mid;
	if (lchu * t * c == 0)
	{
		cout << "0.000";
		return 0;
	}
	while (l + eps <= r)
	{
		mid = (l + r) / 2;
		if ((lchu * 0.5) / sin(mid) * mid * 2 < lhou)
			l = mid + eps;
		else
			r = mid - eps;
	}
	double x = lchu * 0.5 / sin(mid) - lchu * 0.5 / tan(mid);
	printf("%.3lf", x);

	return 0;
}