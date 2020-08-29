class Solution {
public:
    int hammingDistance(int x, int y) {
        int max = x > y ? x : y;
        int min = x > y ? y : x;
        int count = 0;
        while (max > 0) {
            if (max & 1 ^ min & 1) count ++;
            // printf ("%d   %d\n", max, min);
            max >>= 1;
            min >>= 1;
        }
        return count;
    }
};