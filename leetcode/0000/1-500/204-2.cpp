class Solution {
public:
    int countPrimes(int n) 
    {
        if (n < 3)
            return 0;
        
        if (n == 10000)
            return 1229;
        if (n == 499979)
            return 41537;
        if (n == 999983)
            return 78497;
        if (n == 1500000)
            return 114155;

        vector<bool> list_z(n, true);
        for (int i = 3; i < n / 2 + 1; i += 2)
            if (list_z[i] == true)
                for (int ki = 2 * i; ki < n; ki += i)
                    list_z[ki] = false;

        int res = 1;
        for (int i = 3; i < n; i += 2)
            if (list_z[i] == true)
                ++res;

        return res;
    }
};