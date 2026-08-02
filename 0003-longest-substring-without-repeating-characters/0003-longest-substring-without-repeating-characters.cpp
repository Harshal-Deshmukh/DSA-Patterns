class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> f;
        int low=0,high=0,maxLen=0;
        for(high=0;high<s.size();high++){
            f[s[high]]++;
            int length_of_substring = high-low+1;
            while(f.size()<length_of_substring){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                } 
                low++;
                length_of_substring=high-low+1;
            }
            maxLen=max(maxLen,high-low+1);
        }
        return maxLen;
    }
};