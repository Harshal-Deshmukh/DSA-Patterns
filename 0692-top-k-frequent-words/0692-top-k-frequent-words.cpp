class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        struct cmp{
            bool operator()(const pair<int,string> &a,const pair<int,string> &b){
                if(a.first==b.first) return a.second<b.second;
                return a.first>b.first;
            }
        };
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        unordered_map<string,int> f;
        for(int i=0;i<words.size();i++){
            f[words[i]]++;
        }
        cmp c;
        for(auto i: f){
            string element=i.first;
            int frequency=i.second;
            pair<int,string> curr={frequency,element};
            if(pq.size()<k){
                pq.push(curr);
                continue;
            }
            if(!c(curr,pq.top())) continue;
            pq.pop();
            pq.push(curr);
        }
        vector<string> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(),res.end());
         
        return res;
    }
};