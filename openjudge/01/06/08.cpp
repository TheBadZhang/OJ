#include <cstdio>

int main () {

	int winB = 0, winA = 0;
	int N, NA, NB;
	scanf ("%d%d%d",&N, &NA, &NB);
	char *A = new char [NA];
	char *B = new char [NB];
	for (int a = 0; a < NA; a += 1) {
		scanf ("%d", &A [a]);
	}
	for (int b = 0; b < NB; b += 1) {
		scanf ("%d", &B [b]);
	}
	for (int c = 0; c < N; c += 1) {
		if (A [c%NA] == 0) {
			if (B [c%NB] == 0) {
				continue;
			} else if (B [c%NB] == 2) {
				winA += 1;
			} else if (B [c%NB] == 5) {
				winB += 1;
			}
		} else if (A [c%NA] == 2) {
			if (B [c%NB] == 0) {
				winB += 1;
			} else if (B [c%NB] == 2) {
				continue;
			} else if (B [c%NB] == 5) {
				winA += 1;
			}
		} else if (A [c%NA] == 5) {
			if (B [c%NB] == 0) {
				winA += 1;
			} else if (B [c%NB] == 2) {
				winB += 1;
			} else if (B [c%NB] == 5) {
				continue;
			}
		}
	}

	if (winB > winA) {
		printf ("B");
	} else if (winB < winA) {
		printf ("A");
	} else {
		printf ("draw");
	}


	return 0;
}