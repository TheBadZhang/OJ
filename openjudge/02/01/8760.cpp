#include <iostream>

int main () {
    int n = 2, N, d;
    std::cin >> N;
    while (n*(n-1)/2 < N) n ++;
    d = N - (n-1)*(n-2)/2;
    printf ("%d/%d", n%2?d:n-d, n%2?n-d:d);
    return 0;
}




/*
2   (1)1/1(1)
3   (2)1/2  2/1(3)
4   (4)3/1  2/2  1/3(6)
5   (7)1/4  2/3  3/2  4/1(10)
6   (11)5/1  4/2  3/3  2/4  1/5
7   (16)1/6  2/5  3/4  4/3  5/2  6/1
8   (22)7/1  6/2  5/3  4/4  3/5  2/6  1/7
    1/8
*/