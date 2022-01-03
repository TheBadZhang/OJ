class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int t = 0, n = points.size ();
        int lx = points [0][0], ly = points [0][1];
        int x, y, r1, r2;
        for (int a = 1; a < n; a ++) {
            x = points [a][0];
            y = points [a][1];
            r1 = abs (x-lx);
            r2 = abs (y-ly);
            t +=  max (r1, r2);
            lx = x; ly = y;
        }
        return t;
    }
};