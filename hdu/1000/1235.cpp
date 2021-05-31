#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int n, a[1000 + 10];
int dex;
int main() {
	while (~scanf("%d", &n) && n) {
		int ans = 0;
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		scanf("%d", &dex);
		for (int i = 0; i < n; i++)
			if (dex == a[i])
				ans++;
		printf("%d\n", ans);
	}
}