class Solution {
public:
int nextnum(int n){
            int sum=0;
             
        while(n>0){
            int d=n%10;
            sum+=d*d;
            n/=10;

            
        }
        return sum;


        }
    bool isHappy(int n) {
        
        int slow=n;
        int fast=n;

        do{
            slow=nextnum(slow);
            fast=nextnum(nextnum(fast));
        }while(slow!=fast);
    
       return slow==1;
        
    }
};