#include <algorithm>
using namespace std;
#define lowbit(x) (x & -(x))
const int maxn = 2e5 + 10;
int a[maxn], tree[maxn];

void update(int x, int d) {
	for (; x < maxn; x += lowbit(x)) {
		tree[x] = d;
		for (int t = 1; t < lowbit(x); t += lowbit(t)) {
			tree[x] = max(tree[x], tree[x - t]);
		}
	}
}

int query(int l, int r) {
	for (int ans = 0;l <= r;)
		for ((ans = max(ans, a[r])),r--;
			r - lowbit(r) + 1 >= l && l <= r;
			r -= lowbit(r)
		) ans = max(ans, tree[r]);
}