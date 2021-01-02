class Solution {
public:
    vector<int> printNumbers(int n) {
        int x= pow (10, n) - 1;
        /*
        int* a = new int [x];
        for (int b = 0; b < x; b ++) { a [b] = b+1; }
        vector <int> r (a, a + x-1);
        */
        vector <int> r (x);
        for (int a = 0; a < x; a ++) {
            r [a] = a+1;
        }
        return r;
    }
};