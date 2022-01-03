class Solution {
public:
    int climbStairs(int n) {
        int l1 = 1, l2= 2;
        int r;
        if (n == 1) return 1;
        else if (n == 2) return 2;
        else {
            for (int a = 2; a < n; a++) {
                r = l1+l2;
                l1 = l2;
                l2 = r;
            }
            return r;
        }
    }
};