#include <iostream>
#include <string>


int main () {

	std::string str, s1, s2;

	std::getline (std::cin,str,',');
	std::getline (std::cin,s1,',');
	std::getline (std::cin,s2);
	
	if (str.find (s1) + s1.size () <= str.rfind (s2)) {
		std::cout << str.rfind (s2) - str.find (s1) - s1.size ();
	} else std::cout << -1;


	return 0;
}