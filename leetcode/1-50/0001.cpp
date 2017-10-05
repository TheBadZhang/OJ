class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int a = 0; a < nums.size(); a += 1) {
            for (int b = 0; b < nums.size(); b += 1) {
                if (a == b) {
                    continue;
                }
                if (nums [a] + nums [b] == target) {
                    return {a, b};
                }
            }
        }
    }
};