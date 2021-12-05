#include <bits/stdc++.h>

using namespace std;

const int N = 100;
int a[N], b[N];

int main() {
	int n;
	while (~scanf("%d", &n) && n) {
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) scanf("%d", &b[i]);

		sort(a, a + n);
		sort(b, b + n);

		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < n; i++)
			if (a[i] == b[i])
				sum1++, sum2++;
			else if (a[i] > b[i])
				sum1 += 2;
			else
				sum2 += 2;

		printf("%d vs %d\n", sum1, sum2);
	}

	return 0;
}
