// 虽然写的一比一般人都要长，还是很管用的，至少还有更多的（2742B）

#include <iostream>
#include <vector>
#include <algorithm>

std::vector <std::string> L;

void
swap (char &a, char &b) {
	// 交换数据
	char c = a;
	a = b;
	b = c;
}

void
print (std::string s, int a, int b) {

	if (a >= b) {
		L.push_back (s);
		// 将结果添加到 vector 中
		// std::cout << s << std::endl;
		return ;
	}
	for (int c = a; c <= b; c += 1) {
		// 递归寻找所有可能性
		if (a != c) swap (s [a], s [c]);
		print (s, a + 1, b);
		if (a != c) swap (s [a], s [c]);
	}
	
}

bool
max (std::string a, std::string b) {
	// 排序之用
	return a < b ? true : false;
}

int main () {

	std::string s;
	std::cin >> s;
	
	print (s, 0, s.size () - 1);
	std::sort (L.begin (), L.end (), max);
	// 排序

	for (int a = 0; a < L.size (); a += 1) {
		// 输出排序之后的结果
		std::cout << L [a] << std::endl;
	}
	return 0;
}