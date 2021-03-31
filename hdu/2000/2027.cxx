#include <iostream>
#include <string>

int main () {

	int a, e, i, o, u;
	int t;
	std::cin >> t;
	std::string str;
	getchar ();
	bool flag = false;
	while (t --) {
		a = e = i = o = u = 0;
		getline (std::cin, str);
		for (int j = 0; j < str.size(); j++) {
			switch (str [j]) {
				case 'a': a ++; break;
				case 'e': e ++; break;
				case 'i': i ++; break;
				case 'o': o ++; break;
				case 'u': u ++; break;
			}
		}
		if (flag) {
			printf ("\n");
		}
		flag = true;
		printf ("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", a, e, i, o, u);
		// 这里题目描述的实在是有问题，只能说是最后只有一个回车，不过这种东西……算了
	}


	return 0;
}