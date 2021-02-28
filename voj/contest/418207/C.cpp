#include <cstdio>

char plant[4][4];
int i, j;

bool win (char c) {
	for (i = 0; i < 3; i++) {
		// 行
		for (j = 0; j < 3 && plant [i][j] == c; ++j) {
			if (j == 2) return true;
		}
		// 列
		for (j = 0; j < 3 && plant [j][i] == c; ++j) {
			if (j == 2) return true;
		}
	}
	// 主对角线
	for (i = 0; i < 3 && plant[i][i] == c; ++i) {
		if (j == 2) return true;
	}
	// 次对角线
	for (i = 0; i < 3 && plant [i][2-i] == c; ++i) {
		if (j == 2) return true;
	}
	return false;
}

int main () {

	bool flag;
	int n, xcount, ocount;
	while (~scanf ("%d", &n)) {
		getchar ();
		while (n--) {
			xcount = ocount = 0;
			for (j = 0; j < 3; ++j) {
				scanf ("%s", plant[j]);
			}
			flag = true;
			for (i = 0; i < 3; ++i) {
				for (j = 0; j < 3; ++j) {
					if (plant [i][j] == 'X') {
						++ xcount;
					} else if (plant [i][j] == 'O') {
						++ ocount;
					}
				}
			}
			if (win('X') && win ('O')) {
				// 两者一起赢
				flag = false;
			}
			if (win ('X') && xcount == ocount) {
				// 若 X 赢，X 子数必定比 O 多 1
				flag = false;
			}
			if (win ('O') && ocount != xcount) {
				// 若 O 赢，子数必定相同
				flag = false;
			}
			if (ocount > xcount || xcount - ocount > 1) {
				flag = false;
			}
			// printf ("%d %d %d %d", win('X'), win('O'), xcount,ocount);
			if (flag) {
				printf ("yes\n");
			} else {
				printf ("no\n");
			}
		}
	}




	return 0;
}