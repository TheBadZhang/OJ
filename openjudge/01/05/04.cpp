#include <cstdio>

int main() {


    int n;
    scanf("%d", &n);
    int *list = new int[n];
    int x = 0;
    for (int a = 0; a < n; a += 1) {
        scanf("%d", &list[a]);
        x += list[a];
    }

    printf("%d %.5f", x, (double)x/n);


    return 0;
}