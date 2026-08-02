class Solution {
public:
    long long fun(vector<int>&a,int n,int speed){
        long long times=0;
        for(int i=0;i<n;i++){
            times+=a[i]/speed;
            if(a[i]%speed!=0) times++;
        }
        return times;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int max_val=piles[0];
        for(int i=1;i<n;i++){
            max_val=max(max_val,piles[i]);
        }
        int high=max_val;
        int res=-1;
        while(low<=high){
            int guess=low + (high - low)/2;
            long long hour=fun(piles,n,guess);
            if(hour>h) low=guess+1;//no
            else{
                res=guess;
                high=guess-1;
            }
        }
        return res;
    }
};