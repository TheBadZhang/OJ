class Solution {
public:
    // 从后往前遍历，用当前的最大值赋值，找到一个比它大的值，更新最大值
    vector<int> replaceElements(vector<int>& arr) {
        int s = arr.size (), max = arr [s-1], n = 0, na;
        arr [s-1] = -1;
        for (int a = s -2; a >= 0; a --) {
            n = max;
            na = arr [a];
            if (na > max) {
                max = na;
            }
            arr [a] = n;
        }
        return arr;
    }
};