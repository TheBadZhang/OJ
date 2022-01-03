class Solution {
public:
    int minCount(vector<int>& coins) {
        int count = 0;
        for (int a : coins) count += (a+1)>>2;
        return count;
    }
};