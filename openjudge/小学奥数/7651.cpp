// 1.输入为相邻两村间隔，而非绝对距离；
// 2.第一个村必须用粗管。

#include <iostream>
#include <cstdio>
int n, a[110], ans = 100000000;
using namespace std;
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		a[i] += a[i - 1];
	}
	for (int i = 1; i <= n; i++)
	{
		int temp = 0;
		temp += a[i] * 8000;
		for (int j = i + 1; j <= n; j++)
			temp += (a[j] - a[i]) * 2000;
		ans = min(ans, temp);
	}
	cout << ans;
}