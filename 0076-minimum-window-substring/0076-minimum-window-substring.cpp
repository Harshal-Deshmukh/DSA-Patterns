class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> f;
        for(char c: t) f[c]++;
        int low=0,start=0,count=0;
        int minLen = INT_MAX;
        for(int high=0;high<s.size();high++){
            if(f[s[high]]>0) count++;
            f[s[high]]--;
            while(count==t.size()){
                if(high-low+1<minLen){
                    minLen=high-low+1;
                    start=low;
                }
                
                f[s[low]]++;
                if(f[s[low]]>0) count--;
                low++;
                
            }
        }
        return minLen==INT_MAX?"":s.substr(start,minLen);
    }
};