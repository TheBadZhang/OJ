class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort (arr.begin (), arr.end());
        //vector <int> r;// (arr.size ());
        int mid = arr [(arr.size () - 1) / 2];
        // for (int &a : arr) r.push_back (abs (a - mid));
        int ma, mb;
        sort (arr.begin (), arr.end (), [&](int a, int b) -> bool {
            ma = abs (a - mid);
            mb = abs (b - mid);
            return ma > mb
                    ? true
                    : ma == mb
                        ? a > b
                            ? true
                            : false
                        : false;
        });
        vector <int> re (arr.begin (), arr.begin () + k);
        return re;
    }
};