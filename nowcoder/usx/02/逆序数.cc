#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
using ll = long long;

const int len = 100100;
int temp[len];
int v[len];
ll counts = 0;
inline int read() {
	int x = 0, f = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') {
		if (ch == '-')
			f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = (x << 1) + (x << 3) + (ch ^ 48);
		ch = getchar();
	}
	return x * f;
}

void merge(int l, int m, int r) {
	int i = l;
	int j = m + 1;
	int t = l;
	while (i <= m && j <= r) {
		if (v[i] > v[j]) {
			temp[t++] = v[j++];
			counts += m - i + 1;
		} else {
			temp[t++] = v[i++];
		}
	}
	while (i <= m) temp[t++] = v[i++];
	while (j <= r) temp[t++] = v[j++];
	for (int i = r; i >= l; --i) v[i] = temp[--t];
}
void mergesort(int l, int r) {
	if (l == r) return;
	int m = (r + l) / 2;
	mergesort(l, m);
	mergesort(m + 1, r);
	merge(l, m, r);
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &v[i]);
	}

	mergesort(1, n);

	cout << counts;

	return 0;
}