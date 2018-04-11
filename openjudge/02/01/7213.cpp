#include <iostream>

using namespace std;

struct S {
	int x, y;
	int i;
};

int main () {

	int x, y, a, b, d, n, max = 0, count, maxcount = 0;
	S L [20];
	for (a = 0; a < 20; a ++) {
		L [a].x = 0;
		L [a].y = 0;
		L [a].i = 0;
	}

	cin >> d >> n;
	for (a = 0; a < n; a ++)
		cin >> L [a].x >> L [a].y >> L [a].i;

	for (a = 0; a <= 1024; a ++) {
		for (b = 0; b <= 1024; b ++) {
			count = 0;
			for (int c = 0; c < 20; c ++) {
				x = L [c].x;
				y = L [c].y;
				if (x >= a-d && x <= a+d &&
				    y >= b-d && y <= b+d) {
						count += L [c].i;
					}
			}
			if (count > max) {
				max = count;
				maxcount = 1;
			} else if (count == max) {
				maxcount ++;
			}
		}
	}

	cout << maxcount << " " << max;




	return 0;
}