class Solution {
public:
    int subtractProductAndSum(int n) {
        int j = 1, h = 0, a;
        while (n > 0) {
            a = n % 10;
            j *= a;
            h += a;
            n /= 10;
        }
        return j - h;
    }
};