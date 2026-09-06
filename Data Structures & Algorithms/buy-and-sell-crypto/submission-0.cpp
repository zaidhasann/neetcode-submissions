class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int prof = 0;
        int mini = prices[0];

        for(int i=1;i<prices.size();i++){
            int p = prices[i]-mini;
            mini = min(prices[i],mini);
            maxi= max(maxi,p);
        }
        return maxi;
    }
};
