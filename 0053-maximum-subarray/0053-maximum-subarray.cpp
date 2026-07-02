class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
         int n=nums.size();
         int cursum=nums[0];
         int maxi=nums[0];
         for(int i=1;i<n;i++){
            cursum=max(cursum+nums[i],nums[i]);
            maxi=max(cursum,maxi);
         }
         return maxi;
        
    }
};