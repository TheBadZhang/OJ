class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> re (2*n, 0);
        for (int a = 0; a < n; a ++) {
            re [2*a] = nums [a];
            re [2*a+1] = nums [n+a];
        }
        return re;
    }
};