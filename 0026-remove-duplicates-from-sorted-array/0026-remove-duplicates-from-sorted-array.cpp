class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        // unordered_map<int,int> mp;
        // for( auto it:mp){
        //     mp[nums[i]]++;
        // }
        int i=0;
        if (n == 0) return 0;
        int j=0;

        for(j=1;j<n;j++){

            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
                
            }
        }
        return i+1;


    }
};