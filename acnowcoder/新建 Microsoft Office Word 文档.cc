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

const int N = 1e5 + 10;

bool used[N];

int main() {
	set<int> s;
	FOR(i,1,N) s.insert(i);

	int n;
	scanf("%d\n", &n);

	while (n--) {
		int id;
		char str[8];
		scanf("%s %d", str, &id);

		if (str[0] == 'N') {
			printf("%d\n", *s.begin());
			used[*s.begin()] = true;
			s.erase(s.begin());
		} else {
			if (!used[id]) printf("Failed\n");
			else {
				s.insert(id);
				used[id] = false;
				printf("Successful\n");
			}
		}
	}
	return 0;
}
