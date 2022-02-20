#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main () {

    int n, m, t;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		scanf ("%d", &a[i]);
	}
	for (int i = 1; i < n; ++i) {
		a [i] += a[i-1];
	}
	while (m--) {
		scanf ("%d", &t);
		printf ("%d\n", distance(a.begin(), upper_bound(a.begin(), a.end(), t))+1);
	}
    
    return 0;
}