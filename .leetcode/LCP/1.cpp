class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int r = 0;
        for (int a = 0; a < 3; a ++) {
            if (guess [a] == answer [a]) r ++;
        }
        return r;
    }
};