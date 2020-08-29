class Solution {
public:
    int reverse(int x) {
        long long int r = 0, d = 0;
        stringstream s;
        string str;
        s << x; s >> str;
        d = str [0] == '-' ? 1 : 0;
        std::reverse (str.begin () + d, str.end ());
        // s << str; s >> r;
        // cout << str;
        r = atoll (str.c_str());
        if (r > INT_MAX || r < INT_MIN) return 0;
        return r;
    }
};