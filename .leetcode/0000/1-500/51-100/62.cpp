class Solution {
    int C (int n, int m) {
        unsigned long long int re = 1;
        for (int a = 0; a < n; a++) {
            re *= m-a;
            re /= a+1;
        }
        return re;
    }
    int min (int a, int b) {
        return a < b ? a : b;
    }
public:
    int uniquePaths(int m, int n) {
        return C (min (m,n)-1, m+n-2);
    }
};