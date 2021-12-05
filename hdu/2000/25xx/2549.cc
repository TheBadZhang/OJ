#include <cstdio>
 
int main(void) {
    int t, count, n;
    char s[10], c;
 
    scanf("%d", &t);
    getchar();
    while(t--) {
        while((c=getchar()) != '.');
        count = 0;
        while((c=getchar()) != ' ')
            s[count++] = c;
        scanf("%d", &n);
        getchar();
        if(n>count)
            printf("0\n");
        else
            printf("%c\n", s[n-1]);
    }
 
    return 0;
}