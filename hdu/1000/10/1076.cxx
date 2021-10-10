#include <cstdio>

int main(){
	int t, i;
	scanf ("%d", &t);
	while(t--){
		int y ,n ,i , k = 0;
		scanf ("%d%d", &y, &n);
		for (i = y; k < n; i++){
			if ((i%400 == 0) || (i%100 != 0 && i%4 == 0)) k++;
		}
		printf ("%d\n", i-1);
	}
	return 0;
}