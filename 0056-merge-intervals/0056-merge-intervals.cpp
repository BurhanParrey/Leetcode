class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int st1 = intervals[0][0];
        int ed1 = intervals[0][1];

        for(int i=1;i<n;i++){
            int st2 = intervals[i][0];
            int ed2 = intervals[i][1];
            if(ed1 >= st2){
                st1 = st1;
                ed1 = max(ed1,ed2);
                continue;
            }
            res.push_back({st1,ed1});
            st1 = st2;
            ed1 = ed2;
                   
         }
         res.push_back({st1,ed1});
         return res;  
    }
};