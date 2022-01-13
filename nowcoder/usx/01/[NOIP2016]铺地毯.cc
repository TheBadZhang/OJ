#include <cstdio>
#include <vector>

using namespace std;

struct mop {
	int x, y, w, h;
	mop () {
		scanf("%d%d%d%d", &x, &y, &w, &h);
	}
	inline bool judge (const int& xx, const int& yy) const {
		return xx >= x && xx <= x+w && yy >= y && yy <= y+h;
	}
};
int main()
{
	int n, x, y;
	scanf("%d", &n);
	vector<mop> s(n);
	scanf("%d%d", &x, &y);
	while (n--) if (s[n].judge (x, y)) break;
	printf("%d\n", n+1);
	return 0;
}