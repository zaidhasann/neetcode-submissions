class Solution {
public:
    vector<int> dp;

    int solve(string &s, int i) {

        // String complete ho gayi
        if(i == s.size())
            return 1;

        // 0 akela decode nahi ho sakta
        if(s[i] == '0')
            return 0;

        // Already calculated
        if(dp[i] != -1)
            return dp[i];

        // Ek digit
        int ways = solve(s, i + 1);

        // Do digits
        if(i + 1 < s.size()) {

            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

            if(num >= 10 && num <= 26)
                ways += solve(s, i + 2);
        }

        return dp[i] = ways;
    }

    int numDecodings(string s) {

        dp.assign(s.size(), -1);

        return solve(s, 0);
    }
};