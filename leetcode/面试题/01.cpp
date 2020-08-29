class Solution {
public:
    int waysToStep(int n) {
        unsigned long long int s [4] {1, 2, 4, 7};
        if (n <= 4) {
            return s [n-1];
        } else {
            for (int i = 4; i < n; i ++) {
                s [0] = s [1]; s [1] = s [2]; s [2] = s [3];
                s [3] = (s [0] + s [1] + s [2]) % 1000000007;
            }
            return s [3];
        }
    }
};