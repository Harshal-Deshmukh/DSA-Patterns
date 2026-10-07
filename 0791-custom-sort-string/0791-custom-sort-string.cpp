class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        string res;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<order.size();i++){
            if(mp.find(order[i]) != mp.end()){
                while(mp[order[i]]>0){
                    res+=order[i];
                    mp[order[i]]--;
                }
                
            }
        }
        for(auto i: mp){
            char value=i.first;
            while(mp[value]>0){
                    res+=value;
                    mp[value]--;
                }
            
        }
        return res;
    }
};