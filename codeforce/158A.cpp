#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;




int main () {
	
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		scanf ("%d", &v[i]);
	}
	sort (v.begin(), v.end(), greater<int>());
	int count = 0;
	k = v[k-1];
	for (int i = 0; i < n; ++i) {
		if (v[i] >= k && v[i] > 0) {
			count ++;
		} else {
			break;
		}
	}
	printf ("%d", count);
	
	return 0;
}
