class Solution {
public:
    vector<vector<int>>dp;
    const int INF = 1e9;
    int solve(int i ,vector<int>& coins, int amount){
        if(amount==0) return 0;
        if(i>=coins.size()) return INF;

        if(dp[i][amount]!=-1) return dp[i][amount];

        int skip = solve(i+1,coins,amount);
        int pick = INF;
        if(amount>=coins[i]){
            pick =1+solve(i,coins,amount-coins[i]);
        }
        return dp[i][amount]= min(skip,pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.assign(coins.size(),vector<int>(amount+1,-1));
        int ans= solve(0,coins,amount);
        if(ans==INF) return -1;
        else return ans;
    }
};