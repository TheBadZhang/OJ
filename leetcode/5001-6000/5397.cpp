class Solution {
public:
    int gcd(int a,int b) {
        if(a%b == 0) return b;
        else return gcd(b,a%b);
    }
    vector<string> simplifiedFractions(int n) {
        char s [16] {0};
        std::vector <std::string> re;
        for (int a = 2, b; a <= n; a ++) {
            sprintf (s, "1/%d", a);
            re.push_back (s);
            for (b = 2; b < a; b ++) {
                if (gcd (a, b) == 1) {
                    sprintf (s, "%d/%d", b, a);
                    re.push_back (s);
                }
            }
        }
        return re;
    }
};