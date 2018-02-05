#include <cstdio>

int L, M, N;
int d[50010];
int ans;

int main()
{
	scanf("%d %d %d", &L, &N, &M);
	for (int i = 1; i <= N; i++)
		scanf("%d", &d[i]);
	N++;
	d[N] = L;
	int l = 0, r = L;
	while (l <= r)
	{
		int m = (l + r) / 2;
		int t = 0, last = 0;
		for (int i = 1; i <= N; i++)
		{
			if (d[i] - last < m)
				t++;
			else
			{
				last = d[i];
			}
		}
		if (t > M)
		{
			r = m - 1;
		}
		else
		{
			ans = m;
			l = m + 1;
		}
	}
	printf("%d", ans);
	return 0;
}