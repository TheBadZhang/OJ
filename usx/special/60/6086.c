#include <stdio.h>

struct STU {
	int num;
	char name[20];
	char sex;
	int age;
	int score [3];
};



int main () {

	struct STU stu[10];
	int n, i;
	while (~scanf ("%d", &n)) {
		for (i = 0; i < n; i ++) {
			scanf ("%d %s\n%c%d%d%d%d",
				&stu[i].num, stu[i].name,
				&stu[i].sex, &stu[i].age,
				&stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
			int sum = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
			printf ("%d %s %c %d %d %d %d %d %d\n",
				stu[i].num, stu[i].name, stu[i].sex,
				stu[i].age, stu[i].score[0], stu[i].score[1], stu[i].score[2], sum, sum/3);
		}
	}


	return 0;
}