#include <iostream>
#include <map>
#include <string>
#include <algorithm>

int main () {

	std::map <std::string, int> balloon;
	std::string color;
	int N, max;
	while (std::cin >> N) {
		balloon.clear ();
		max = 0;
		if (N == 0) {
			break;
		}
		while (N--) {
			std::cin >> color;
			if (balloon.count (color) == 0) {
				balloon [color] = 1;
			} else {
				balloon [color] ++;
			}
		}
		for (auto i : balloon) {
			if (i.second > max) {
				max = i.second;
				color = i.first;
				// printf ("%d\t%s\n", max, color.c_str());
			}
		}
		printf ("%s\n", color.c_str());
	}

	return 0;
}