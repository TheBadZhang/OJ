#include <string>
#include <iostream>


using namespace std;

string pat, s1, s2;
int nxt[100005];

void getNext(int lengthP) {
	int j = 0, k = -1;
	nxt[0] = -1;
	while (j < lengthP) {
		if (k == -1 || pat[j] == pat[k])
			j++, k++, nxt[j] = k;
		else
			k = nxt[k];
	}
}
//求next

int main() {
	while (cin >> s1 >> s2) {
		pat = s1 + s2;
		int l1 = s1.length(), l2 = s2.length();
		int len = pat.length();
		getNext(len);
		nxt[len] = min(nxt[len], min(l1, l2));
		for (int i = 0; i < nxt[len]; i++)
			cout << pat[i];
		if (nxt[len])
			cout << ' ';
		cout << nxt[len] << endl; //打印
	}

	return 0;
}