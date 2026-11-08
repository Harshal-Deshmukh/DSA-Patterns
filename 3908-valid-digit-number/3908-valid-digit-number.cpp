class Solution {
public:
    bool validDigit(int n, int x) {
        bool valid=false;
        while(n>9){
            int d=n%10;
            if(d==x) valid=true;
            n=n/10;
        }
        if(n==x) valid=false;
        return valid;
    }
};