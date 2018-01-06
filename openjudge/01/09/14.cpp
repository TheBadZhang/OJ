#include <iostream>
#include <vector>
#include <cmath>
struct ditj {
	int x, y, w, h;
};
int main () {

	std::vector <ditj> list;
	int n;
	std::cin >> n;
	for (int a = 0; a < n; a += 1) {
		ditj t;
		std::cin >> t.x >> t.y >> t.w >> t.h;
		list.push_back (t);
	}
	int x, y;
	std::cin >> x >> y;
	for (n -= 1; n >= 0; n -= 1) {
		if (x >= list [n].x && x <= list [n].x + list [n].w &&
		    y >= list [n].y && y <= list [n].y + list [n].h) {
			std::cout << n+1;
			return 0;
		}
	}
	std::cout << "-1";



	return 0;
}