#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, n, i;
	cin >> m >> n;
	int sum = n / m;
	int q = (int)sqrt(sum);
	for (i = q; i > 0; i--)
		if (sum % i == 0)
		{
			sum = sum / i;

			if (__gcd(sum, i) == 1) break;
			else sum *= i;
		}
	cout << m * (i + sum);
	return 0;
}