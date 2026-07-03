class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int n=arr.size();
        int nodel=arr[0];
        int onedel=INT_MIN;
        int res=arr[0];

        for(int i=1;i<n;i++){
            int prnodel=nodel;
            int pronedel=onedel;

            nodel=max(nodel+arr[i],arr[i]);
        

            int v;
            if(pronedel==INT_MIN)
              v=arr[i];
            else
              v=pronedel+arr[i];

            onedel=max(v,prnodel);

            res=max({res,onedel,nodel});
        }

        return res;
        
    }
};