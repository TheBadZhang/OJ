#include <iostream>
#include <string>
using namespace std;
void move (string &A) {
	char temp = A [0];
	for (int a = 0; a < A.size ()-1; a += 1) {
		A [a] = A [a+1];
	}
	A [A.size () - 1] = temp;
}

int main () {

	string A, B;
	cin >> A >> B;
	bool flag = false;
	int len = A.size () > B.size () ? A.size () : B.size ();
	int AB  = A.size () > B.size () ? 0: A.size () < B.size () ? 1 : 2;
	for (int a = 0; a < len; a += 1) {
		if (AB == 0) {
			if (A.find (B) == string::npos) flag = true;
			else if (A.find (B) != string::npos) { cout << "true"; return 0; }
			move (A);
		} else if (AB == 1) {
			if (B.find (A) == string::npos) flag = true;
			else if (B.find (A) != string::npos) { cout << "true"; return 0; }
			move (B);
		} else {
			if (A == B) { cout << "true"; return 0; }
			else flag = true;
			move (A);
		}
	}
	if (flag) cout << "false";

	return 0;
}