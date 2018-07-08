#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[501][501], i, j;
	a[1][0] = 1;
	a[1][1] = 1;
	a[2][0] = 1;
	a[2][1] = 3;
	for (i = 3; i <= 300; i++)
	{
		for (j = 1; j <= max(a[i - 2][0], a[i - 1][0]); j++)
			a[i][j] = a[i - 1][j] + a[i - 2][j] * 2;
		a[i][0] = max(a[i - 2][0], a[i - 1][0]);
		for (j = 1; j <= a[i][0]; j++)
		{
			a[i][j + 1] += a[i][j] / 10;
			a[i][j] %= 10;
		}
		while (a[i][a[i][0] + 1])
		{
			a[i][0]++;
			a[i][a[i][0] + 1] += a[i][a[i][0]] / 10;
		}
	}
	int n;
	while (cin >> n)
	{
		if (n == 0)
			cout << 1 << endl;
		else
		{
			for (int i = a[n][0]; i >= 1; i--)
				cout << a[n][i];
			cout << endl;
		}
	}
	return 0;
}