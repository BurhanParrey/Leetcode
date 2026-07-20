class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int i=0;
        unordered_map<char,int> mp;
        while(n>0){
            mp[s[i]]++;
            i++;
            n--;
            
        }
        for(i =0;i<s.size();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
        
    }
};