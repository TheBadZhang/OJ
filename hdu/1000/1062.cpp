#include <stack>
#include <iostream>


int main () {
	
	char ch;
	std::stack <char> stc;
	int n;
	scanf ("%d\n", &n);
	while (n--) {
		while (true) {
			ch = getchar ();
			if (ch == '\n' || ch == ' ' || ch == EOF) {
				while (!stc.empty()) {
					printf ("%c", stc.top());
					stc.pop();
				}
				if (ch == '\n' || ch == EOF) break;
				printf (" ");
			} else {
				stc.push (ch);
			}
		}
		printf ("\n");
	}
	
	return 0;
}
