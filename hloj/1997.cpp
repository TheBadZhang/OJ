#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>

struct STU{
	std::string name;
	int a, b, c;
	float ave;

} student [100];

bool cmp (STU a, STU b) {
	if (a.ave != b.ave) {
		return a.ave > b.ave;
	} else {
		return a.name < b.name;
	}
}

int main () {

	int n;
	while (std::cin >> n) {
		for (int i = 0; i < n; i++) {
			std::cin >> student[i].name >> student[i].a >> student[i].b >> student[i].c;
			student[i].ave = (student[i].a + student[i].b + student[i].c)/3.0;
		}
		std::sort (student, student + n, cmp);
		for (int i = 0; i < n; ++i) {
			printf ("%s %d %d %d %.2lf\n", student[i].name.c_str(), student[i].a, student[i].b, student[i].c, student[i].ave);
		}
	}




	return 0;
}