// 写不来……
#include <cstdio>
using namespace std;
int n, m, x;
int a[100010];
int ans;
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d", &x);
		int l = 1, r = n;
		ans = 1;
		while (l <= r)
		{
			int mid = (l + r) / 2;
			if (a[mid] <= x)
			{
				ans = mid;
				l = mid + 1;
			}
			else
				r = mid - 1;
		}
		if (ans == n || x - a[ans] <= a[ans + 1] - x)
			printf("%d\n", a[ans]);
		else
			printf("%d\n", a[ans + 1]);
	}
	return 0;
}