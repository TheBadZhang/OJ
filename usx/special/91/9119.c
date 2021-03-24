#include <stdio.h>

int main () {

    int l = 0, i;
    scanf ("%d", &i);
    do {
        l ++;
        i /= 10;
    } while (i > 0);
    printf ("%d", l);

    return 0;
}