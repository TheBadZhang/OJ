class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector <bool> kid (candies.size (), false);
        int max, cs = candies.size ();
        for (int a : candies) if (a > max) max = a;
        for (int a = 0; a < cs; a++) {
            if (candies [a] + extraCandies >= max) {
                kid [a] = true;
            }
        }
        return kid;
    }
};