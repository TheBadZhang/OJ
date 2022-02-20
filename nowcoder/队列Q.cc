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

const int N = 100010;
int arr[N], pos[N], n;

int main() {

	int num;
	string str;
	cin >> n;
	FOR(i,1,n) {
		cin >> arr[i];
		pos[arr[i]] = i;
	}
	int T, l = 1, r = n;
	cin >> T;
	while (T--) {
		cin >> str >> num;
		if (str == "FIRST") pos[num] = --l;
		else pos[num] = ++r;
	}
	sort(arr + 1, arr + n + 1, [&](int a, int b){
		return pos[a] < pos[b];
	});
	FOR(i,1,n) cout << arr[i] << " ";
	cout << endl;
	return 0;
}
