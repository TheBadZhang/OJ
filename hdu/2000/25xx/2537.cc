#include <cstdio>
 
int main() {
	int n, red, yellow, i;
	char c;
 
	while(scanf("%d", &n) != EOF && n) {
		getchar();
		red = yellow = 0;
		for(i=0; i<n; i++) {
			scanf("%c", &c);
			if(c == 'R')
				red++;
			else if(c == 'Y')
				yellow++;
		}
 
		if(c == 'B')
			printf("%s\n", (red == 7) ? "Red" : "Yellow");
		else if(c == 'L')
			printf("%s\n", (yellow == 7) ? "Yellow" : "Red");
	}
 
	return 0;
}