#include <bits/stdc++.h>
using namespace std;
int a[100000], mi, k = 0, m, l = 0, n;
bool u = true;
void ch(int v, int b)
{
	k = 0;
	l = 0;
	mi = (v + b) / 2;
	for (int o = 0; o < m; o++)
	{
		k += a[o];
		if (k > mi)
		{
			l++;
			k = a[o];
		}
	}
	l++;
	if (l <= n)
		u = true;
	else if (l > n)
		u = false;
}
int main()
{
	int p = 0, q = 0;
	cin >> m >> n;
	for (int j = 0; j < m; j++)
	{
		cin >> a[j];
		if (a[j] > p)
			p = a[j];
		q += a[j];
	}
	while (q > p)
	{
		ch(p, q);
		if (u)
			q = mi;
		else
			p = mi + 1;
	}
	cout << p;
	return 0;
}