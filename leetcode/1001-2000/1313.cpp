class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int ns = nums.size ();
        int s = 0;
        for (int a = 0; a < ns; a += 2) {
            s += nums [a];
        }
        int* l = new int [s];
        for (int a = 0, b, n, d, e = 0; a < ns; a += 2) {
            n = nums [a];
            d = nums [a + 1];
            for (b = 0; b < n; b ++) {
                l [e++] = d;
            }
        }
        vector <int> r (l, l + s);
        return r;
    }
};