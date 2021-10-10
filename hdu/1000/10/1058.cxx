
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int num[6000];

int main() {
	int a,b,c,d;
	int i,tmp;

	num[1] = 1;
	a = 1;
	b = 1;
	c = 1;
	d = 1;
	for(i = 2; i <= 6000; i++) {
		num[i] = min(min(num[a]*2,num[b]*3),min(num[c]*5,num[d]*7));
		if(num[i] == num[a]*2) a++;
		if(num[i] == num[b]*3) b++;
		if(num[i] == num[c]*5) c++;
		if(num[i] == num[d]*7) d++;
	}

	while(~scanf("%d",&tmp),tmp) {
		printf("The %d",tmp);

		if(tmp%10 == 1 && tmp%100 != 11)
			printf("st");
		else if(tmp%10 == 2 && tmp%100 != 12)
				printf("nd");
			else if(tmp%10 == 3 && tmp%100 != 13)
					printf("rd");
				else printf("th");
		printf(" humble number is %d.\n",num[tmp]);
	}
	return 0;
}