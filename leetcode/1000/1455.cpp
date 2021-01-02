class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss;
        ss << sentence;
        string temp;
        int swx = searchWord.size (), count = 0;
        while (ss.rdbuf() -> in_avail() != 0) {
            ss >> temp;
            count ++;
            if (temp.substr (0, swx) == searchWord) {
                return count;
            }
        }
        return -1;
    }
};