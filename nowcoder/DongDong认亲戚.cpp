#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <queue>
#include <map>
#include <set>

using namespace std;
using ll = long long;
#define FOR(x, b, e) for (int x = b; x <= e; ++x)
#define ROF(x, b, e) for (int x = b; x >= e; --x)
#define FOR0(x, b, e) for (int x = b; x < e; ++x)
#define ROF0(x, b, e) for (int x = b; x > e; --x)
inline ll read(){
	ll s = 0, w = 1; char ch = getchar();
	while (ch < 48 || ch > 57) { if (ch == '-') w = -1; ch = getchar(); }
	while (ch >= 48 && ch <= 57) s = (s << 1) + (s << 3) + (ch ^ 48), ch = getchar();
	return s * w;
}
const int N = 20020;
map<string, int> name;
int f[N];
char str1[20], str2[20];
int search(int v) {
	return f[v] == v ? v : f[v] = search(f[v]);
}
void merge(int u, int v) {
	int t1, t2;
	t1 = search(v);
	t2 = search(u);
	if (t1 != t2) f[t2] = t1;
}
int main() {
	int i, n, m, u, v, op, book;
	scanf("%d%d", &n, &m);
	FOR(i,1,n) {
		scanf("%s", str1);
		name[str1] = i;
	}

	FOR(i,1,n) f[i] = i;

	while (m--) {
		scanf("%d %s %s", &op, str1, str2);
		book = 0;
		if (op == 1) merge(name[str1], name[str2]);
		else if (op == 2) {
			if (search(f[name[str1]]) == search(f[name[str2]]))
				printf("1\n");
			else
				printf("0\n");
		}
	}
	return 0;
}
