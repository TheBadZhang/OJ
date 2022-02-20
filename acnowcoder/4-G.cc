#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

using ll = long long;
using namespace std;


const int max_len = 1023;

ll l, r;
ll nums[max_len];
int total = 0;
void next (ll cur) {
	if (total >= max_len || cur > 1e9) return;
	nums[total++] = cur;
	next(cur * 10 + 4);
	next(cur * 10 + 7);
}

int main () {
	cin >> l >> r;
	next(0);
	nums[0] = 4444444444;
	sort(nums, nums + total);
	ll ans = 0, cur = l - 1;
	for (int i = 0; i < total; i++) {
		if (nums[i] < l) continue;
		if (nums[i] >= r) {
			ans = ans + nums[i] * (ll)(r - cur);
			break;
		}
		ans = ans + nums[i] * (ll)(nums[i] - cur);
		cur = nums[i];
	}
	// ans = accumulate (lower_bound(nums, nums+total, l),lower_bound(nums, nums+total, r), 0);
	cout << ans << endl;
}
