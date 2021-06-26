#include <stdio.h>
#include <math.h>
#include <string.h>

void output(char *s, int n);            //声明输出函数

int main() {
	char str[300] = {0};
	while (gets (str) != NULL) {
		output (str, strlen (str)+1);                    //调用输出函数
	}
	return 0;
}

//输出函数
void output(char *s, int n) {
	char *i;
	int j, k, t, m, temp[10], num;
	double sum, a[30];
	for (i=s, num=0, j=0, m=0; i<s+n; i++) {
		if (*i>='0'&&*i<='9')
			num=1, temp[j++]=(int)(*i-'0');
		else if (num) {
			for (num=0, k=0, sum=0, t=j-1; k<j; sum+=temp[k]*pow(10, t), t--, k++);
			a[m++]=sum, j=0;
		}
	}
	printf ("%d", m);
	for(j=0; j<m; printf(" %.0f", a[j++]));
	printf("\n");
}