#include <cstring>
#include <iostream>

using namespace std;

int main () {
	int m, n, ms[105], w, o, i;
	memset (ms, 0, sizeof (ms));
	cin >> n >> m;

	for (int p = 0; p < n; p ++) {
		cin >> w;
		for (i = 0, o = 0; i < m; i ++) 
			if (ms [o] > ms [i] ) o = i;
		ms [o] += w;
	}

	for (i = 0, o = 0; i < m; i ++)
		if (ms [o] < ms [i]) o = i;

	cout << ms [o];
	return 0;
}


// 又不想自己写了……