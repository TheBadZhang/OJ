class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> re (rowIndex + 1, 1);
        long long t = 1;
        for (int a = 1; a < rowIndex; a++) {
           t = t *(rowIndex-a+1)/a;
            re [a] = t;
        }
        return re;
    }
};