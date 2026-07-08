class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> temp;
        bool inserted = false;
        int n=intervals.size();


        for(int i = 0; i<n; i++) {
            if(!inserted && intervals[i][0] >= newInterval[0]) {
                temp.push_back(newInterval);
                inserted = true;
            }
            temp.push_back(intervals[i]);
        }
        if(!inserted)
            temp.push_back(newInterval);
        vector<vector<int>> res;

        int st1 = temp[0][0];
        int ed1 = temp[0][1];

        for(int i = 1; i < temp.size(); i++) {

            int st2 = temp[i][0];
            int ed2 = temp[i][1];

            if(ed1 >= st2) {
                ed1 = max(ed1, ed2);
            }
            else {
                res.push_back({st1, ed1});
                st1 = st2;
                ed1 = ed2;
            }
        }

        res.push_back({st1, ed1});
        return res;
        
    }
};