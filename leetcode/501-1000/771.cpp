class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool jewls [128] {};
        int count = 0;
        for (auto ch : J) {
            jewls [ch] = true;
        }
        for (auto ch : S) {
            if (jewls [ch]) {
                count ++;
            }
        }
        return count;
    }
};