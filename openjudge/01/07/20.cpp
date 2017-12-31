#include <string>
#include <iostream>

int main () {

	std::string str;
	std::cin >> str;
	// 数据输入
	auto ing = str.rfind ("ing");
	auto er = str.rfind ("er");
	auto ly = str.rfind ("ly");
	// 查找词缀
	if (ing != std::string::npos) {
		if (str [ing + 3] == '\0') str.erase (ing);
	} else if (er != std::string::npos) {
		if (str [er + 2] == '\0') str.erase (er);
	} else if (ly != std::string::npos) {
		if (str [ly + 2] == '\0') str.erase (ly);
	}
	// 若找到，且词缀后方没有字母，删除词缀
	std::cout << str;
	// 输出

	return 0;
}