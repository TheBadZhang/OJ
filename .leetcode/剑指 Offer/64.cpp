class Solution {
public:
    int sumNums(int n) {
        // int res = n;
        // n && (n += sumNums (n-1));
        // return n;
        return n*(n+1) >> 1;    
    }
};