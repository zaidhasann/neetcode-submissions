class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>>freq;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }

        for(auto it : mp){
    freq.push_back({it.second, it.first});
}
 sort(freq.rbegin(),freq.rend());
 for(int i=0;i<k;i++){
    ans.push_back(freq[i][1]);
 }
 return ans;
    }
};
