class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt=INT_MIN;
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            alt=max(sum,alt);
        }
        if(alt>0) return alt;
        return 0;
    }
};