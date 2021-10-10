#include <iostream>
#include <cstdio>
#include <cstring>

int main () {

	long long ans [50][30];
	char str [2][100];
	int t, k;
	std::cin >> t;
	while (t--) {
		scanf ("%s%s%d", str [0], str[1], &k);
		memset (ans, 0, sizeof(ans));
		for (int i = 0; i < strlen (str[0]); i++) {
			ans [0][str[0][i]-'a']++;
		}
		for (int i = 0; i < strlen (str[1]); i++) {
			ans [1][str[1][i]-'a']++;
		}
		for (int i = 2; i < 50; i++) {
			for (int j = 0; j < 26; j++) {
				ans [i][j] = ans [i-1][j] + ans [i-2][j];
			}
		}
		char c = 'a';
		for (int i = 0; i < 26; i++) {
			printf ("%c:%lld\n", c+i, ans [k][i]);
		}
		std::cout << std::endl;
	}

	return 0;
}