class Solution {
private:
    int mid (int x, int a) {
        int n = 1;
        for (int b = 0; b < a-1; b += 1) {
            n *= 10;
        }
        return x/n%10;
    }
public:
    bool isPalindrome(int x) {
        int n = x, l = 0;
        if (n < 0) {
            return false;
        } else {
            while (n > 0) {
                l += 1;
                n /= 10;
            }
            n = x;
            for (int a = 1; a <= l/2; a ++) {
                // printf ("%d %d", mid (n, a), mid (n, l-a+1));
                if (mid(x, a) != mid (x, l-a+1)) {
                    return false;
                }
            }
            return true;
        }
    }
};