#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


struct Stu {
	// 生日相同的学生数据结构
	std::vector<std::string> Name;
	int month;
	int day;
};
std::vector<Stu> Birth;
// 多条生日相同


int main() {

	int n;
	std::cin >> n;

	bool flag2 = true;
	// 检测是否有至少一个人的生日重复了

	for (int a = 0; a < n; a += 1) {

		std::string name;
		int month, day;
		bool flag = true;
		// 检测是否有重复的数据
		std::cin >> name >> month >> day;
		// 输入数据

		for (auto &x : Birth) {
			if (x.month == month && x.day == day) {
				// for (int y = 0; y < max(x.))
				x.Name.push_back(name);
				// 追加条目
				flag = false;
				flag2 = false;
			}
		}

		if (flag) {
			// 若没有重复，则添加新条目
			Stu sss;
			sss.month = month;
			sss.day = day;
			sss.Name.push_back (name);
			Birth.push_back(sss);
		}
		// 录入数据
	}

//// 以上步骤没有错误



		auto bb = Birth.begin ();
		auto be = Birth.end   ();

		std::sort (bb, be, [](Stu a, Stu b){ return a.month < b.month; });
		std::sort (bb, be, [](Stu a, Stu b){ return a.day   < b.day;   });
		// 对日期进行排序
		for (auto &a : Birth) {
			if (a.Name.size () > 1) {
				// 如果相同生日的人在一个以上（不包括一个）
				flag2 = false;
				std::sort (a.Name.begin (), a.Name.end (),
						[](std::string a, std::string b){ 
							return a.size () == b.size () ? a < b : a.size () < b.size (); });
				// 对名字进行排序

				std::cout << a.month << " " << a.day << " ";
				for (auto &b : a.Name) std::cout << b << " ";
				std::cout << "\n";
				// 照题意输出
 
 			}
		}
	if (flag2) {

		// 如果没有人的生日是重复的，则输出 None
		std::cout << "None" << std::endl;
	
	}


	return 0;



}