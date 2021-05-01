#include <cstdio>

using namespace std;

int main () {
	int n;
	while (~scanf ("%d",&n)) {
		if (n%4 == 2) puts ("yes");
		else puts ("no");
	}
	return 0;
}