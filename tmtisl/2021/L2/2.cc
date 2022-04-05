#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)
#define ROF0(x, b, e) for (int x = b; x > e; --x)

ll num[100100];

int main () {

	int n, p;
	cin >> n >> p;
	FOR0 (i, 0, n) scanf ("%d", &num[i]);
	sort (num, num + n);
	ll sum = 0;
	int a, b;
	FOR0 (i,0,n) {   // 选出一个国家，
		a = distance(num, upper_bound(num+i+1, num+n, abs(num[i]-p)));// 大于两数之差
		b = distance(num, lower_bound(num+i+1, num+n, p+num[i]));     // 三角形，小于两数之和
		sum += b - a;
	}

	cout << sum << endl;

	return 0;
}