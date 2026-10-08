class Solution {
public:
    int mySqrt(int x) {
        int res=0;
        int low=0,high=x;
        if(low==high) return x;
        while(low<=high){
            long long mid=low+(high-low)/2;
            
            if(mid*mid<=x){
                res=mid;
                low=mid+1;
            }

            else{
                high=mid-1;
            }

        }
        //if((res+1)*(res+1)==x) return res+1;
        return res;
    }
};