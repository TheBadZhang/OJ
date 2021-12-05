#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int a, b;

int work(int c) {
	int sum = 0;
	int h = sqrt(c) + 0.5;
	for (int i = 1; i < h; i++) {
		if (c % i == 0) sum = sum + i + c / i;
	}
	return sum - c;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		int sum = work(a);
		if (sum != b) {
			printf("NO\n");
			continue;
		}
		sum = work(b);
		if (sum != a)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}