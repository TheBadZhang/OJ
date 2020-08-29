class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        short bucket [1001] {0};
        for (int a : target) {
            bucket [a] ++;
        }
        for (int a : arr) {
            bucket [a] --;
        }
        for (int a = 1; a < 1001; a ++) {
            if (bucket [a]) {
                return false;
            }
        }
        return true;
    }
};