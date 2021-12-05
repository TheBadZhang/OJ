#include <cstdio>
#include <cmath>
 
int main(void) {
    int t;
    double a, b, c, d;
 
    scanf("%d", &t);
    while(t--) {
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
 
        printf("%.1lf\n", sqrt(a * a + b * b + c * c + d * d - 2 * a * c - 2 * b * d));
    }
 
    return 0;
}