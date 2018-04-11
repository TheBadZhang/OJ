#include <iostream>
using namespace std;
int main () {

	int B [200] = {0};
	int F [20000];

	int N, M, A, P;
	cin >> N >> M;

	for (A = 0; A < N; A ++) {
		cin >> F [A];
		B [F [A]] += 1;
	}

	for (A = 0; A < N; A ++) {
		P = B [F [A]] - 1;
		if (P) cout << P << endl;
		else   cout << "BeiJu" << endl;
	}

	return 0;
}