class Solution {
public:
    int square_sum(int n){
        int sum=0,d=0;
        while(n!=0){
            d=n%10;
            n=n/10;
            sum+=d*d;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=square_sum(n);
        while(fast!=1 && slow!=fast){
            slow=square_sum(slow);
            fast=square_sum(square_sum(fast));     
                    }
        return fast==1;
    }
};