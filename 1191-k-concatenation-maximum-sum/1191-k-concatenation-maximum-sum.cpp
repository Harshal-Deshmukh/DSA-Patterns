class Solution {
public:
    long long kadanes(vector<int> &a){
        long long curr=0;
        long long best=0;
        for(auto i: a){
            curr+=i;
            best=max(best,curr);

            if(curr<0) curr=0;
        }
        return best;
    }

    long long kadanesoftwo(vector<int> &a){
        vector<int> newa=a;
        newa.insert(newa.end(),a.begin(),a.end());
        return kadanes(newa);
    }
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long MOD=1e9+7;
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        long long two=kadanesoftwo(arr);
        if(k==1) return kadanes(arr);
        else if(sum<=0) return two %MOD;
        else return (two+(long long)(k-2)*sum)%MOD;  
    }
};