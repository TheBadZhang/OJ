#include <iostream>
#include <algorithm>

using namespace std;

int main () {

	int n, m;
	while (cin >> n, n) {
		int dp[1005] = {0}, price [1005] = {0};
		for (int i = 0; i < n; i++) {
			cin >> price[i];
		}
		sort (price, price+n, greater<int>()); // 降序排序中，0为最大
		cin >> m;
		m -= 5;
		if (m < 0) {
			printf("%d\n",m+5);
		} else {
			for (int i = 1; i < n; i++) // 拿走了最大的
				for (int j = m; j >= price [i]; j--) // 在不同余额下买这个菜的最大值（且能够买的菜）
					dp [j] = max (dp [j], dp [j-price[i]] + price [i]);

			printf("%d\n", (m+5) - dp [m] - price [0]);
		}
	}

	return 0;
}