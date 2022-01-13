#include <iostream>
using namespace std;

#define FOR(i,j) for (int _i = i; _i < j; ++_i)

int main() {
	int L, M, st, cl, ans = 0;
	cin >> L >> M;
	int tree[L + 1];
	FOR (0, L+1) tree[_i] = 0;
	FOR (0, M) {
		cin >> st >> cl;
		FOR(st,cl+1) tree[_i] = 1;
	}
	FOR(0,L+1) if (tree[_i] == 0) ans++;
	cout << ans;
	return 0;
}