class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        int res=INT_MAX;
        unordered_map<char,int> mp;
        for(char c: text){
            mp[c]++;
        }
        res=min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});

        return res;





        
    }
};