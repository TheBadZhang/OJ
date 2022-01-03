class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sx = digits.size (), d = 1;
        //digits [sx-1] ++;
        for (int a = sx-1; a >= 0; a --) {
            if (digits [a] == 9) {
                digits [a] = 0;
            } else {
                digits [a] ++;
                d = 0;
                break;
            }
        }
        if (d) {
            digits [0] = 1;
            digits.push_back (0);
        }
        return digits;
    }
};