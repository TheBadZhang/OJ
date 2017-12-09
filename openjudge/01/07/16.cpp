#include <iostream>
#include <algorithm>
#include <string>

int main () {

	std::string A, B;
	getline (std::cin, A);
	getline (std::cin, B);
	transform(A.begin(), A.end(), A.begin(), ::toupper);
	transform(B.begin(), B.end(), B.begin(), ::toupper);
	// 当字符串长度相等但是有不同的字符时，比较第一个不同字符的大小
	// 根据比对结果输出符号
	if (A > B) std::cout << ">";
	else if (A < B) std::cout << "<";
	else std::cout << "=";
	return 0;
}