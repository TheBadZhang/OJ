#include <cstdio>
#include <cstring>


int main () {

	int jack, jack_grade, id, temp, grade [1010], num, rank;

	while (~scanf ("%d", &jack)) {
		memset (grade, 0, sizeof (grade));
		num = 0;
		while (scanf ("%d %d", &id, &temp)) {
			if (id == 0 && temp == 0) { break; }
			num ++;
			if (id == jack) jack_grade = temp;
			grade [num] = temp;
		}
		rank = 1;
		for (temp = 1; temp <= num; temp++) {
			if (grade [temp] > jack_grade) rank ++;
		}
		printf ("%d\n", rank);
	}

	return 0;
}