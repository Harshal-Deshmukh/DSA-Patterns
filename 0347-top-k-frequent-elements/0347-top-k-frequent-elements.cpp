class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        struct cmp{
            bool operator()(pair<int,int> &a, pair<int,int> &b){
                if(a.first==b.first) return a.second>b.second;
                return a.first>b.first;
            }
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        
        unordered_map<int,int> f;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }
        for(auto i: f){
            int element=i.first;
            int frequency=i.second;
            pair<int,int> curr={frequency,element};
            if(pq.size()<k){
                pq.push(curr);
                continue;
            }
            pq.push(curr);
            pq.pop();
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};