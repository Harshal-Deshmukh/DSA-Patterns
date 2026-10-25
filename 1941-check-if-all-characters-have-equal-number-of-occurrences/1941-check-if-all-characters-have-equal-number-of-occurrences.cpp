class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int prev=-1;
        unordered_map<int,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            if(prev==-1){
                prev=i.second;
                continue;
            }
            else{
                if(prev!=i.second) return false;
            }
        }
        return true;
    }
};