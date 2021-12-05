#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		double h, m, s;
		cin >> h >> m >> s;
		if (h > 12)
			h -= 12;
		double angle1, angle2;
		m += s / 60;
		angle1 = m * 360 / 60;
		h += m / 60;
		angle2 = h * 360 / 12;
		double ans = fabs(angle1 - angle2);
		if (ans > 180)
			ans = 360 - ans;
		cout << (int)ans << endl;
	}

	return 0;
}