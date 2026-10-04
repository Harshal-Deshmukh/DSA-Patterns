class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int res=INT_MIN;
        for(int i=0;i<citations.size();i++){
            //paper=i+1
            if(citations[i]>=(i+1)) res=max(res,i+1);
        }
        if(res==INT_MIN) return 0;
        return res;
    }
};