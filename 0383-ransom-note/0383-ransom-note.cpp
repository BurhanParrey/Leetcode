class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        unordered_map<char,int> rp;

        int i=0;
        for(char c:magazine){
            mp[c]++;
        }
        for(char c:ransomNote){
            rp[c]++;
        }
        
        for(auto it: rp){
            if(mp[it.first]<it.second){
                return false;

            }
        }
         
        return true;
        
    }
};