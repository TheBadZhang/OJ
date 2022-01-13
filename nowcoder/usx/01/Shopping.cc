#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	int n;
	cin >> n;
	while (n--) {
		int n, m;
		int cnt = 0, x;
		double sum = 0;

		cin >> n >> m;

		vector<int> a(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i] >> x;
			cnt += x;     // 椅子个数
			sum += a[i];  // 总价
		}

		sort(a.begin(), a.end());

		int temp = min(cnt, m);
		for (int i = n-1; i >= n-temp; i--) sum -= a[i]/2.0;

		printf("%.1f\n", sum);
	}
}