class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            stringstream ss;
            string str;
            ss << x; ss >> str;
            int sx = str.size ();
            for (int a = 0; a < sx/2; a++) {
                if (str [a] != str [sx-1-a]) {
                    return false;
                }
            }
            return true;
        }
    }
};