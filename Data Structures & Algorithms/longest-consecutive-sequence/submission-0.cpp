class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for (int x : nums) {
            st.insert(x);
        }
        int ans=0;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int len=1;
            
                while(st.find(x+1)!=st.end()){
                    len++;
                    x++;
                }  
                ans = max(ans,len);
            }
        }
        return ans;
    }
};
