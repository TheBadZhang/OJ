#include <string>
#include <iostream>


int main () {

	std::string A;
	// std::cin >> A;
	// 此题有空白字符输入
	getline (std::cin, A);
	
	for (int a = 0; a < A.length()-1; a += 1) {
		std::cout << (char)(A[a] + A[a+1]);
	}
	std::cout << (char)(A[0] + A[A.length()-1]);


	return 0;
}