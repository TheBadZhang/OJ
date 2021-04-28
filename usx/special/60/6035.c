#include <stdio.h>

int money [6] = { 1, 2, 5, 10, 20, 50 };
#define for2(v,end) for(v=0;v<=end;v++)

int main () {
	int i, j, k, l, m, n, s = 0;
	for2(n,2)for2(m,5)for2(l,10)for2(k,20)for2(j,50)for2(i,100)
		if (i+2*j+5*k+10*l+20*m+50*n==100) {
			s ++;
		}
	printf ("%d\n", s);

	return 0;
}