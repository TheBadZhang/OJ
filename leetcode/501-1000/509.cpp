class Solution {
public:
    int fib(int N) {
        int b = 1, c = 1, t;
        for (int a = 3; a <= N; a++) {
            t = b+c;
            b = c;
            c = t;
        }
        if (N == 0) return 0;
        if (N < 3) return 1;
        return t;
    }
};