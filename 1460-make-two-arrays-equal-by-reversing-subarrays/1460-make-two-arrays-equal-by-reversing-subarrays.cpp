class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> t_mp;
        unordered_map<int,int> a_mp;

        for(int i=0;i<arr.size();i++){
            t_mp[target[i]]++;
            a_mp[arr[i]]++;
        }

        for(auto i:t_mp){
            if(a_mp.find(i.first)==a_mp.end()) return false;
            if(i.second!=a_mp[i.first]) return false;
        }
        return true;
    }
};