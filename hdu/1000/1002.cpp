#include <iostream>
#include <string>


int main () {

	int n;
	std::cin >> n;
	std::string A, B, C, D;
	bool flag = false;
	for (int j = 1; j <= n; ++j) {
		std::cin >> A >> B;
		C = B;
		D = A;
		A.reserve ();
		B.reserve ();
		// int msize = std::min (A.size(), B.size ());
		int jw = 0;
		if (A.size () > B.size ()) {
			std::swap (A, B);
		}
		for (int i = 0; i < B.size (); ++i) {
			B [i] -= '0';
			if (i < A.size ()) {
				A [i] -= '0';
				B [i] += A [i];
			}
			B [i] += jw;
			jw = B[i]/10;
			B [i] %= 10;
			// printf ("%d %d %d\n", i, B[i], A[i]);
			B [i] += '0';
		}
		if (flag) std::cout << "\n";
		flag = true;
		std::cout << "Case "<< j <<":\n" << D << " + " << C << " = ";
		if (jw > 0) {
			// B.push_front (jw+'0');
			// B += (char)(jw+'0');
			printf ("1");
		}
		for (int i = 0; i < B.size (); ++i) {
			printf ("%c", B[B.size()-i-1]);
		}
		printf ("\n");
	}

	return 0;
}