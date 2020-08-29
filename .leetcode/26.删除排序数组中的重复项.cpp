/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int d = 1;
        for (int a = 1; a < nums.size (); a ++) {
            // 当遇到不同的数字时，把这个数字往前移
            if (nums [a] == nums [a-d]) {
                d ++;
            } else {
                nums [a - d + 1] = nums [a];
            }
        }
        return nums.size () - d + 1;
    }
};
// @lc code=end

