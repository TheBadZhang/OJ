class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector <int>> yh (numRows);
        // yh.push_back ({1});
        for (int a =0, b; a < numRows; a++) {
            // yh.push_back ({1});
            yh [a].resize (a + 1, 1);
            for (b = 1; b < a; b++) {
                yh [a][b] = yh [a-1][b-1]+yh [a-1][b];
            }
            // yh [a].push_back (1);
        }
        return yh;
    }
};