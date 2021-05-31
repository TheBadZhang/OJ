#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>


using namespace std;

struct node {
	string name;
	int score;
	int id;
} stu[500], stu1[500];

int main() {
	int n;
	while (cin>>n) {
		for (int i = 0; i < n; i++) {
			cin >> stu[i].name >> stu[i].score;
			stu[i].id=i;
		}
		stable_sort(stu, stu + n, [](node a, node b) { return a.score != b.score ? a.score > b.score : a.id < b.id; } );
		int flag = 0;
		for (int i = 0; i < n; i++){
			cin >> stu1[i].name >> stu1[i].score;
			if (stu1[i].score!=stu[i].score) {
				flag=1;     //  Error;
			} else if (stu1[i].name!=stu[i].name) {
				flag=2;     //  Not Stable;
			}
		}
		if (!flag)
			cout << "Right" << endl;
		else if (flag == 1) {
			cout << "Error" << endl;
			for (int i = 0; i < n; i++)
				cout << stu[i].name << ' ' << stu[i].score << endl;
		} else if (flag == 2) {
			cout << "Not Stable" << endl;
			for (int i = 0; i < n; i++)
				cout << stu[i].name << ' ' << stu[i].score << endl;
		}
	}
	return 0;
}