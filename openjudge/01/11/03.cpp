// 做不来……
#include <iostream>

using namespace std;
long long x1[10005], x2[10005], y1[10005], w[10005], h[10005], s[10005];
long long R, N, a;
long long d(long long x)
{
	long long sum = 0;
	for (long long i = 1; i <= N; i++)
	{
		if (x2[i] <= x)
		{
			sum += s[i];
			continue;
		}
		else if (x1[i] >= x)
		{
			sum -= s[i];
			continue;
		}
		else
		{
			sum = sum + (x - x1[i]) * h[i] - (x2[i] - x) * h[i];
		}
	}
	return sum;
}
void work(long long l, long long r)
{
	if (l == r)
	{
		a = l;
		return;
	}
	long long mid = (l + r) / 2;
	if (d(mid) >= 0)
		work(l, mid);
	else
		work(mid + 1, r);
}
int main()
{
	cin >> R;
	cin >> N;
	for (long long i = 1; i <= N; i++)
	{
		cin >> x1[i] >> y1[i] >> w[i] >> h[i];
		x2[i] = x1[i] + w[i];
		s[i] = w[i] * h[i];
	}
	work(0, R);
	while (d(a) == d(a + 1) && a < R)
	{
		a++;
	}
	cout << a << endl;
	return 0;
}