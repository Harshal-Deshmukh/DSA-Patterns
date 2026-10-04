class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_map<int,int> rev;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto i :mp){
            int val=i.second;
            rev[val]++;
        }
        for(auto i:rev){
            int val=i.second;
            if(val>1) return false;
        }
        return true;
    }
};