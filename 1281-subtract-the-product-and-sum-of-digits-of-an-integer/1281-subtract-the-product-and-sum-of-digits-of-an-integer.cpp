class Solution {
public:
    int subtractProductAndSum(int n) {
        int d, sum = 0, prod = 1;
        for(int i=0;n>0;i++){
            d = n%10;
            prod = prod*d;
            sum += d; 
            n = n/10;
        }
        return prod-sum;
    }
};