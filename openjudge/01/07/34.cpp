#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;
char s[666],b[666],c[666];

int main() {

	scanf("%s",s);
	int n;
	n = strlen(s);

	for(int len = 2;len <= n;len ++) {
		for(int i = 0; i + len <= n; i ++) {
			
			bool flag = false;

			for(int j = i; j < i+len; j ++) {
				if(s [j] != s [i+i-j-1+len]) {
					flag=true;
					break;
				}
			}

			if(!flag) {
				for(int k = i; k < i+len; k ++)
					printf("%c",s[k]);
				cout << endl;
			}
		}
	}
	return 0;
}