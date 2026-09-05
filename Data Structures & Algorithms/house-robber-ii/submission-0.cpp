class Solution {
public:
    vector<int>dp;
    int solve(int idx , int end ,vector<int>& nums ){
        if(idx>end) return 0;

        if(dp[idx]!=-1) return dp[idx];

        int pick = nums[idx] + solve(idx+2,end,nums);
        int skip = solve(idx+1,end,nums);
        
        return dp[idx]=max(skip,pick);

    }
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return nums[0];
        dp.assign(n+1,-1);
        int case1 = solve(0,n-2,nums);

         dp.assign(n+1,-1);
        int case2 = solve(1,n-1,nums);

        return max(case1,case2);
    }
};