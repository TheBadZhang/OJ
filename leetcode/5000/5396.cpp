class Solution {
public:
    int maxPower(string s) {
        char c = s [0];
        int max = 0, steady = 0;
        for (char ch : s) {
            if (ch == c) {
                steady ++;
                if (steady > max) max = steady;
            } else {
                c = ch;
                steady = 1;
            }
        }
        return max;
    }
};