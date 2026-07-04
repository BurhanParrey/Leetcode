class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int n=nums.size();
        int sum=nums[0];
        int maxsum=nums[0];
        int minsum=nums[0];
        int res=nums[0];
        int curmax=nums[0];
        int curmin=nums[0];
        int tsum=0;

        for(int i=1;i<n;i++){
            sum+=nums[i];
            curmax=max(nums[i],curmax+nums[i]);
            maxsum=max(maxsum,curmax);
            curmin=min(nums[i],curmin+nums[i]);
            minsum=min(minsum,curmin);

            tsum=sum-minsum;
            

        }
        if(minsum==sum){
            return maxsum;
        }

        res=max(tsum,maxsum);

        return res;
        
    }
};