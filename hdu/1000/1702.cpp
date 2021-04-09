#include <iostream>
#include <string>
#include <stack>
#include <queue>

int main () {
	
	std::string str;
	int n, m, i;
	std::cin >> n;
	while (n--) {
		std::stack <int> s;
		std::queue <int> q;
		std::cin >> m >> str;
		if (str == "FIFO") {
			while (m--) {
				std::cin >> str;
				if (str == "IN") {
					std::cin >> i;
					q.push(i);
				} else {
					if (!q.empty()) {
						std::cout << q.front() << std::endl;
						q.pop();
					}
					else
						std::cout << "None" << std::endl;
				}
			}
		} else {
			while (m--) {
				std::cin >> str;
				if (str == "IN") {
					std::cin >> i;
					s.push(i);
				} else {
					if (!s.empty()) {
						std::cout << s.top() << std::endl;
						s.pop();
					}
					else
						std::cout << "None" << std::endl;
				}
			}
		}
	}
	
	
	
	return 0;
}
