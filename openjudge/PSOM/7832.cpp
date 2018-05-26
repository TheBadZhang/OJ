#include <bits/stdc++.h>
using namespace std;
long double a, b, c, d, e, f, x, y, z;
int n, i, j;
int main()
{
	cin >> n >> a >> b;
	e = a / b;
	for (i = 1; i < n; i++)
	{
		c = i;
		for (j = 1; j <= n; j++)
		{
			d = j;
			f = c / d;
			if (f > z && f < e && x != 0 && y != 0)
			{
				x = c;
				y = d;
				z = x / y;
			}
			if (x == 0 && y == 0)
			{
				x = c;
				y = d;
			}
		}
	}
	for (i = 2; i <= x, i <= y; i++)
	{
		if (int(x) % i == 0 && int(y) % i == 0)
		{
			x /= i;
			y /= i;
			i = 2;
		}
	}
	cout << x << " " << y;
	return 0;
}