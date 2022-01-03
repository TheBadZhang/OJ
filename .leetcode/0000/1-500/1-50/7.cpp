class Solution {
public:
    int reverse(int x) {
        long long int r = 0, d = x;
        bool s;
        if (x > 0) {
            s = true;
        } else {
            s = false;
            d = -d;
        }
        while (d > 0) {
            r = r*10 + d%10;
            d /= 10;
        }
        if (!s) r = -r;
        if (r > INT_MAX || r < INT_MIN) r = 0;
        return r;
    }
};