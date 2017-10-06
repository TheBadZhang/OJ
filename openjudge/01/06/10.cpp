#include <iostream>
#include <string>

int main () {

	char *R = new char [300];
	char *A = new char [300];
	char *B = new char [300];
	for (int a = 0; a < 300; a += 1) {
		R [a] = 0;
		A [a] = 0;
		B [a] = 0;
	}
	R [300] = 0;
	std::string ss1;
	std::string ss2;
	std::cin >> ss1 >> ss2;
	int lena = ss1.length(), lenb = ss2.length();
	int maxsize = lena > lenb ? lena : lenb;
	for (int a = 0; a < lena; a += 1) {
		A [lena-a-1] = ss1 [a] - 48;
	}
	for (int a = 0; a < lenb; a += 1) {
		B [lenb-a-1] = ss2 [a] - 48;
	}

	for (int a = 0; a < maxsize; a += 1) {
		R [a] += A [a]+ B [a];
		if (R [a] >= 10) {
			R [a+1] += R [a] / 10;
			R [a] %= 10;
		}
	}
	if (R [maxsize] > 0) {
		maxsize += 1;
	}
	bool flag = false;
	for (int a = 0; a < maxsize; a += 1) {
		if (!flag && R [maxsize-a-1] != 0) {
			flag = true;
		}
		if (flag) {
			printf ("%d",R [maxsize-a-1]);
		}
	}
	if (!flag && R [0] == 0) {
		printf ("0");
	}



	return 0;
}