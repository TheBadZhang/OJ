#include <stdio.h>
 
int main(void) {
    int t;
    float u, v, w, l;
 
    scanf("%d", &t);
    while(t--) {
        scanf("%f%f%f%f", &u, &v, &w, &l);
        printf("%.3f\n", l / (u + v) * w);
    }
 
    return 0;
}