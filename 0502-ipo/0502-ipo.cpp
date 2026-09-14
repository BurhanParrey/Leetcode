class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {

        int n=profits.size();
        vector<pair<int,int>> proj;
        int i;
        for(i=0;i<n;i++){
            proj.push_back({capital[i],profits[i]});
        }
        sort(proj.begin(),proj.end());
        priority_queue<int> pq;

        int index=0;

        while(k--){
            while(index<n){
                if(proj[index].first >w){
                    break;
                }
                pq.push(proj[index].second);
                index++;
            }
            if(pq.empty()){
                return w;
            }
            w=w+pq.top();
            pq.pop();
        }

        return w;

    }
};