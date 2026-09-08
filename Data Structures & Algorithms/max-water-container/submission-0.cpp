class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0, rp = height.size()-1, maxWater=0;

        while(lp<rp){
                int w = rp-lp;
                int ht = min(height[lp],height[rp]);
                int curr = w*ht;

                maxWater = max(maxWater,curr);

                if(height[lp]<height[rp]){
                    lp++;
                }
                else{
                    rp--;
                }
              }
        return maxWater;
    }
};