#include <cstdio>



int main () {

	for (int a = 2; a <= 100; a +=1)
		for (int b = a; b <= 100; b +=1)
			for (int c = 2; c <= 100; c +=1)
				if (a*a+b*b == c*c) 
					printf ("%d*%d + %d*%d = %d*%d\n",
					        a, a, b, b, c, c);




	return 0;
}