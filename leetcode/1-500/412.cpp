class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> re;
        for (int a = 1; a <= n; a ++)
            if (a % 3 == 0)
                if (a % 5 == 0) re.push_back ("FizzBuzz");
                else re.push_back ("Fizz");
            else if (a % 5 == 0)
                if (a % 3 == 0) re.push_back ("FizzBuzz");
                else re.push_back ("Buzz");
            else re.push_back (to_string (a));
        return re;
    }
};