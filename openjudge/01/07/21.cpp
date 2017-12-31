#include <string>
#include <iostream>

int main () {

	std::string str1, str2, str3;

	std::getline (std::cin, str1);
	std::cin >> str2 >> str3;

	int l2 = str2.size ();
	int l3 = str3.size ();
	int step = l2 > l3 ? l2 : l3;
	unsigned int pos = 0;

	while (std::string::npos != str1.find (str2, pos)) {
		
		pos = str1.find (str2, pos);
		if (str1 [pos+l2] != ' ' && str1 [pos+l2] != '\0' ||
		    pos!=0 && str1 [pos-1] != ' ')
			goto end;
		str1.replace (pos, l2, str3);
end:
		pos += step;
	}
	std::cout << str1;

	return 0;
}

// 需注意 yours 中的 you 不能被替换