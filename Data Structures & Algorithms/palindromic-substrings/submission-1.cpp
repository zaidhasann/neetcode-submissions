class Solution {
public:
    vector<vector<int>> dp;

    bool solve(string &s, int i, int j) {

        if(i >= j)
            return true;

        if(dp[i][j] != -1)
            return dp[i][j];

        if(s[i] != s[j])
            return dp[i][j] = false;

        return dp[i][j] = solve(s, i + 1, j - 1);
    }

    int countSubstrings(string s) {

        dp.assign(s.size(), vector<int>(s.size(), -1));

        int ans = 0;

        for(int i = 0; i < s.size(); i++) {
            for(int j = i; j < s.size(); j++) {

                if(solve(s, i, j))
                    ans++;
            }
        }

        return ans;
    }
};