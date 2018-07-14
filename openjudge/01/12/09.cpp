#include <bits/stdc++.h>
using namespace std;
int a[105][105], b[105][105], m, n, q, i, j;
int main()
{
	char c;
	cin >> m >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	while (cin >> c)
	{
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++)
				switch (c)
				{
				case 'A':
					b[j][m - i + 1] = a[i][j];
					break;
				case 'B':
					b[n - j + 1][i] = a[i][j];
					break;
				case 'C':
					b[i][n - j + 1] = a[i][j];
					break;
				case 'D':
					b[m - i + 1][j] = a[i][j];
					break;
				default:
					break;
				}
		memcpy(a, b, sizeof(a));
		if (c == 'A' || c == 'B')
		{
			q = m;
			m = n;
			n = q;
		}
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}