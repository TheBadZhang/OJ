#include <iostream>

using namespace std;

int main(){
	char s;
	int j, i, a, b, r, flag;
	while (cin >> i) {
		getchar ();
		while (i--){
			scanf ("%c %d %d\n", &s, &a, &b);
			flag = 0;
			switch (s) {
				case '+': j = a+b; break;
				case '-': j = a-b; break;
				case '*': j = a*b; break;
				case '/': j = a/b; flag = (a%b); break;
			}
			if (flag > 0) {
				printf ("%.2f\n", static_cast<float>(a)/b);
			} else {
				printf ("%d\n", j);
			}
		}
	}
	return 0;
}