#include <stdio.h>
#include <string.h>

int main () {

	int n;
	while (~scanf ("%d\n", &n)) {
		int i;
		int score, maxscore;
		char name[80], maxname[80], num[80];
		for (i = 0; i < n; i++) {
			scanf ("%s %s %d\n", num, name, &score);
			if (i == 0) {
				maxscore = score;
				strcpy (maxname, name);
			}
			if (score > maxscore) {
				strcpy (maxname, name);
				maxscore = score;
			}
		}
		printf ("%s %d\n", maxname, maxscore);
	}

	return 0;
}