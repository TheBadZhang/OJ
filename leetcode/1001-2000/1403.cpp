class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort (nums.begin(), nums.end(), std::greater<int>());
        long long sum = 0;
        for (int a : nums) {
            sum += a;
        }
        int n = 0;
        long long asum = nums[0];
        while (asum <= sum - asum) {
            n ++;
            asum += nums[n];
        }
        vector<int> result;
        for (int a = 0; a <= n; a++) {
            result.push_back (nums[a]);
        }
        return result;
    }
};