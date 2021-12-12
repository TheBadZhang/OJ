#include<iostream>
#include<cstring>
using namespace std;
//HDU1358  Period
#define MAXSIZE 1000005
int Next[MAXSIZE];
char Str[MAXSIZE];
int Len;

void KMP() {

	Next[0] = -1;
	for (int j = -1, k = 0;k < Len;) {
		if (j == -1 || Str[j] == Str[k]) {
			j++; k++;
			Next[k] = j;    //j==Next[k]
			if (k % (k - j) == 0 && j != 0) {       // 这部分和普通的 KMP 不同了
				cout << k << " " << k / (k - j) << endl;
			}
		} else
			j = Next[j];
	}
}

int main() {
	int Case = 0;
	while (cin >> Len && Len) {

		cin >> Str;
		cout << "Test case #" << ++Case << endl;
		KMP();
		cout << endl;
	}
	return 0;
}