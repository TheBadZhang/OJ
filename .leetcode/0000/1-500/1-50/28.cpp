class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size () == 0) return 0;
        else {
            const char *haystackc = haystack.c_str ();
            const char *needlec = needle.c_str ();
            int hs = haystack.size ();
            int ns = needle.size ();
            for (int a = 0, b; a < hs; a ++) {
                for (b = 0; b < ns; b ++) {
                    if (haystackc [a+b] != needlec [b]) {
                        break;
                    }
                }
                if (b == ns) return a;
            }
        }
        return -1;
    }
};