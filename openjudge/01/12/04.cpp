// 一看到矩阵就神烦

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m, n, r, s, a[105][105], b[105][105], t = 0, i, j, k, l, ans = 1000000, ci = 0, cj = 0;
	cin >> m >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	cin >> r >> s;
	for (i = 1; i <= r; i++)
		for (j = 1; j <= s; j++)
			cin >> b[i][j];
	for (i = 1; i <= m - r + 1; i++)
		for (j = 1; j <= n - s + 1; j++)
		{
			t = 0;
			for (k = i; k <= i + r - 1; k++)
				for (l = j; l <= j + s - 1; l++)
					t = t + abs(a[k][l] - b[k - i + 1][l - j + 1]);
			if (t < ans)
			{
				ans = t;
				ci = i;
				cj = j;
			}
		}
	for (i = ci; i <= ci + r - 1; i++)
	{
		for (j = cj; j <= cj + s - 1; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
	return 0;
}