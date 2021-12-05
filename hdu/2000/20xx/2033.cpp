#include <iostream>

int main () {

	int n;
	int ha, hb, ma, mb, sa, sb;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> ha >> ma >> sa >> hb >> mb >> sb;
		sa += sb;
		ma += mb + sa/60;
		sa %= 60;
		ha += hb + ma/60;
		ma %= 60;
		printf ("%d %d %d\n", ha, ma, sa);
	}



	return 0;
}