class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int minsum=nums[0];
        int cursum=nums[0];
        int curmin=nums[0];
        int maxsum=nums[0];
        int ans=abs(nums[0]);

        for(int i=1;i<n;i++){

            curmin=min(nums[i],curmin+nums[i]);
            minsum=min(minsum,curmin);
            cursum=max(nums[i],cursum+nums[i]);
            maxsum=max(maxsum,cursum);
            ans=max({maxsum,abs(minsum),ans});
        }
        return ans;
    }
};