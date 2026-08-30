class Solution {
public:
    struct cmp {
        bool operator()(pair<int,char>& a, pair<int,char>& b) {
            return a.first < b.first;
        }
    };

    priority_queue<pair<int,char>, vector<pair<int,char>>, cmp> pq;

    string reorganizeString(string s) {
        unordered_map<char,int> mp;

        for(char x : s) {
            mp[x]++;
        }

        for(auto it : mp) {
            pq.push({it.second, it.first});
        }

        string res = "";
        pair<int,char> prev = {0, '#'};

        while(!pq.empty()) {

            pair<int,char> curr = pq.top();
            pq.pop();

            res.push_back(curr.second);
            curr.first--;

            if(prev.first > 0) {
                pq.push(prev);
            }

            prev = curr;
        }

        if(prev.first > 0) {
            return "";
        }

        return res;
    }
};