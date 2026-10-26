class Solution {
public:
    bool checkDivisibility(int n) {
        int r=0,sum=0,mul=1;
        int temp=n;
        while(n!=0){
            r=n%10;
            sum+=r;
            mul=mul*r;
            n=n/10;
        }
        if(temp%(sum+mul)==0) return true;
        return false;
    }
};