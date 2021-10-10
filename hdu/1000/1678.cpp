#include <cstdio>
#include <algorithm>
#include <iostream>

int main () {

	int t;
	std::cin >> t;

	while (t--) {
		int n, a[20005];
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		std::sort (a, a+n, std::greater<int>());
		int ans = 0;
		for (int i = 2; i < n; i+=3) {
			ans += a[i];
		}
		std::cout << ans << std::endl;
	}


	return 0;
}