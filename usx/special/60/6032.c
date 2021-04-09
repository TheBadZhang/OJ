#include <stdio.h>
#include <math.h>

int main () {

	int n, i, j;
	while (~scanf ("%d", &n)) {
		for (i = 0; i < 2*n-1; i++) {
			for (j = 0; j < 2*abs((n-i-1)); j++) {
				printf (" ");
			}
			printf ("*");
			for (j = 0; j < 2*(n-abs(n-i-1)-1); j++) {
				printf (" *");
			}
			printf ("\n");
		}
	}



	return 0;
}

/*
        *4 0           4  0 
      * * *3 1         3  1 
    * * * * *2 2       2  2 
  * * * * * * *1 3     1  3 
* * * * * * * * *0 4   0  4 
  * * * * * * *        -1 3 
    * * * * *          -2 2 
      * * *            -3 1 
        *              -4 0 

        *  
      *    
    * *    
  * * * *  
* * * * * *
  * * * *  
    * *    
      *    
        *  
          *
        *  
      *    
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
        *
          *

*/