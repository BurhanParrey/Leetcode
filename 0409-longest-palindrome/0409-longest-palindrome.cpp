class Solution {
public:
    int longestPalindrome(string s) {
        int n =s.size();
        unordered_map<char,int> mp;
        int res=0;
        for(char c : s){
            mp[c]++;
        }
        for(auto it:mp){
            if(it.second %2==0){
                res+=it.second;
                
            }
            
            if(it.second%2==1){
                res+= it.second -1;
            }
        }
        
        if(res<n){
            res+=1;
        }
         

        return res;

        
    }
};