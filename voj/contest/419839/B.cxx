#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <map>
#include <algorithm>


struct p {
	std::string number;
	int count;
};
bool cmp (p a, p b) {
	return a.number < b.number;
}

int main () {

	int N, n;
	std::string tmp = "00000000";
	std::cin >> N;
	std::vector <p> listsp;
	std::vector <std::string> lists (N);
	std::map <std::string, int> maps;
	for (int i = 0; i < N; ++i) {
		std::cin >> lists[i];
		int count = 0;
		for (int j = 0; j < lists[i].size(); ++j) {
			if (std::isalpha (lists[i][j])) {
				switch (lists[i][j]) {
					case 'A': case 'B': case 'C':
						n = '2'; break;
					case 'D': case 'E': case 'F':
						n = '3'; break;
					case 'G': case 'H': case 'I':
						n = '4'; break;
					case 'J': case 'K': case 'L':
						n = '5'; break;
					case 'M': case 'N': case 'O':
						n = '6'; break;
					case 'P': case 'R': case 'S':
						n = '7'; break;
					case 'T': case 'U': case 'V':
						n = '8'; break;
					case 'W': case 'X': case 'Y':
						n = '9'; break;
				}
				tmp [count] = n;
				++ count;
			} else if (std::isalnum (lists[i][j])) {
				n = lists[i][j];
				tmp [count] = n;
				++ count;
			}
			if (count == 3) {
				tmp [count++] = '-';
			}
		}
		// std::cout << tmp << "\t" << lists[i] << std::endl;
		lists [i] = tmp;
	}
	for (int i = 0; i < N; ++i) {
		if (maps.count(lists[i])) {
			++ maps [lists[i]];
		} else {
			maps [lists[i]] = 1;
		}
	}
	bool flag2 = false;
	std::map <std::string, int>::iterator it = maps.begin();
	while (it != maps.end()) {
		p tt;
		tt.number = it -> first;
		tt.count = it -> second;
		if (tt.count > 1) {
			listsp.push_back (tt);
			flag2 = true;
		}
		it ++;
	}
	if (flag2) {
		std::sort (listsp.begin(), listsp.end (), cmp);
		for (int i = 0; i < listsp.size (); ++i) {
			std::cout << listsp [i].number << " " << listsp [i].count << std::endl;
		}
	} else {
		std::cout << "No duplicates." << std::endl;
	}
	return 0;
}