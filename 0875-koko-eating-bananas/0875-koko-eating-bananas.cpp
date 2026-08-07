class Solution {
public:
    long long fun(vector<int>& a,int n, int k){
        long long h=0;
        for(int i=0;i<n;i++){
            h+= (a[i]+ k-1)/k;
        
        // if(a[i]% k!=0){
        //     h++;
        // }
        }
        return h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        int res=-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            long long hr=fun(piles,n,mid);
            if(hr>h){
                low=mid+1;
            }else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
        
    }
};