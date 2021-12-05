#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
	int t, n;
	double score, s;
	char a[30];
	cin >> t;
	while (t--) {
		int flag = 0;
		double sum = 0, sum1 = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a >> s >> score;
			if (score < 60 && score >= 0)
				flag = 1;
			sum = score * s + sum;
			sum1 = s + sum1;
		}
		if (flag == 0)
			printf("%.2lf\n", sum / sum1);
		else
			printf("Sorry!\n");
		if (t)
			cout << endl;
	}
	return 0;
}