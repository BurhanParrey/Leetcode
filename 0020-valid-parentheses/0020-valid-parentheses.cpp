class Solution {
public:
    bool isValid(string s) {
        string str= s;
        int n=s.size();
        
        stack<char> st;
        // if(n%2==1){
        //     return false;
        // }

        for(int i=0;i<n;i++){
            if(str[i]=='('||str[i]=='{'||str[i]=='['){
                st.push(str[i]);

            }
            if(st.empty()){
                return false;
            }
            if(str[i]==')'){
              if(st.top()!='(') return false;
              st.pop();
            }
            if(str[i]=='}'){
              if(st.top()!='{') return false;
              st.pop();
            }
            if(str[i]==']'){
              if(st.top()!='[') return false;
              st.pop();
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
        
    }
};