class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int n=num;
        while(n!=0){
            int d=n%10;
            if(num%d==0) cnt++;
            n=n/10;
        }
        return cnt;
    }
};