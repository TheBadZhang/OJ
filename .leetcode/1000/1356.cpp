class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int num [2][101] {0};
        for (auto a : nums) {
            num [0][a] += 1;
        }
        for (int a =1; a < 101; a ++) {
            num [1][a] = num [1][a-1] + num [0][a-1];
        }
        vector <int> n = nums;
        for (auto &a : n) {
            a = num [1][a];
        }
        return n;
    }
};