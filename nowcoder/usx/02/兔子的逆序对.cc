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

	int n, m;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &v[i]);
	}
	mergesort(1,n);

	scanf("%d", &m);
	while (m--) {
		int l, r;
		scanf("%d%d", &l, &r);
		counts += (r-l+1)*(r-l)/2;
		counts &= 1;
		if (counts) printf("dislike\n");
		else printf("like\n");
	}
	return 0;
}
