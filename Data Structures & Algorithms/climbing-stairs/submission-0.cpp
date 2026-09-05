class Solution {
public:
vector<int>dp;
   int solve(int i,int n){
     if(n==i) return 1;
     if(i>n) return 0;
     if(dp[i]!=-1)return dp[i];
     int one = solve(i+1,n);
     int two = solve(i+2,n);

     return dp[i]=one+two;

   }
    int climbStairs(int n) {
        dp.assign(n+1,-1);
        return solve(0,n);
    }
};
