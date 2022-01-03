class Solution {
private:
int min (int a, int b) {
    return a > b ? b : a;
}
public:
    int maxArea(vector<int>& height) {
        int* h = new int [height.size ()];
        int b = 0;
        for (auto a : height) {
            h [b] = a;
            // printf ("%d  ", h [b]);
            b ++;
        }
        // printf ("%d,",b);
        int a, c, r, max = 0;
        for (a = 0; a < b; a ++) {
            for (c = a + 1; c < b; c ++) {
                r = (c-a)*min(h[a], h[c]);
                // printf ("%d   ", r);
                if (r > max) max = r;
            }
        }
        return max;
    }
};