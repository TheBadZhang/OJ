#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// #include <functional>

using namespace std;
struct S {
	// 数据储存结构
	S (string a, int b) {
		// 初始化用函数，为 push_back 服务
		str = a;
		times = b;
	}
	string str;
	int times;
};

bool my_less (S a, S b) {
	// 排序用比较函数
	return a.str < b.str;
}

int main () {

	vector <S> list;
	string str;
	cin >> str;
	int s = str.size ();
	for (int a = 0; a < s; a += 1) {
		for (int b = 1; b <= s-a; b += 1) {
			// 遍历字符串提取所有字串，n^2 / 2个子串
			bool flag = true;
			for (auto &c : list) {
				// 寻找子串
				if (str.substr (a, b) == c.str) {
					// 若存在，出现次数加一
					c.times += 1;
					flag = false;
				}
			}
			if (flag) {
				// 若不存在，添加条目
				list.push_back ({str.substr (a, b), 1});
			}
		}
	}

	sort (list.begin (), list.end (), my_less);
	// 排序

	for (auto a : list) {
		if (a.times > 1)
		// 输出符合结果的子串和数目
			cout << a.str << " " << a.times << endl;
	}


	return 0;
}