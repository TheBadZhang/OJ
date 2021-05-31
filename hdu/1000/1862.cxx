#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct student{
	int id;
	string name;
	int score;
} s;

int main () {
	int n, c, num = 0;
	std::vector <student> stu;
	while (cin >> n >> c && n) {
		num++;
		stu.clear ();
		for (int i = 0; i < n; i++) {
			cin >> s.id >> s.name >> s.score;
			stu.push_back (s);
		}
		if (c == 1)
			sort(stu.begin(),stu.end(), [](student a,student b){
				return a.id < b.id;
			});
		else if (c == 2)
			sort(stu.begin(),stu.end(), [](student a,student b){
				return a.score!=b.score ? true : (a.name==b.name && a.id < b.id);
			});
		else if (c == 3)
			sort(stu.begin(),stu.end(), [](student a,student b){
				return a.score!=b.score ? a.score<b.score : a.id<b.id;
			});
		printf("Case %d:\n",num);
		for (int i = 0; i < n; i++)
			printf("%06d %s %d\n",stu[i].id,stu[i].name.c_str(),stu[i].score);
	}
	return 0;
}