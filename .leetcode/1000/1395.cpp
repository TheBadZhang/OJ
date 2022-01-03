static bool speedUP = [](){std::ios::sync_with_stdio(false); cin.tie(nullptr); return true;}();

class Solution {
public:
    int numTeams(vector<int>& rating) {
        unsigned char sx = rating.size ();
        int ix, jx, kx, count = 0;
        for (unsigned char i = 0, j, k; i < sx - 2; i ++) {
            for (j = i+1; j < sx - 1; j++) {
                for (k = j+1; k < sx; k ++) {
                    ix = rating [i]; jx = rating [j]; kx = rating [k];
                    if (ix < jx && ix < kx && jx < kx) {
                        count ++;
                    } else if (ix > jx && ix > kx && jx > kx) {
                        count ++;
                    }
                }
            }
        }
        return count;
    }
};