class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0,high=0;
        int max_Freq=0;
        int max_len=0;
        unordered_map<char,int> f;
        for(high=0;high<s.size();high++){
            f[s[high]]++;
            max_Freq=max(max_Freq,f[s[high]]);
            int len=high-low+1;
            int diff=len-max_Freq;
            if(diff>k){
                f[s[low]]--;
                low++;
            }
            max_len=max(max_len,high-low+1);
        }
        return max_len;
    }
};