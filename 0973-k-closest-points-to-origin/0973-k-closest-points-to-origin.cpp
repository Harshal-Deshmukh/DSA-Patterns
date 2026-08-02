class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        struct cmp {
       bool operator()(pair<int,int>& a, pair<int,int>& b) {
           return a.first < b.first;       
        }
   };
priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
    for(int i=0;i<points.size();i++){
        int d=points[i][0]*points[i][0]+points[i][1]*points[i][1];
        pair<int,int> curr={d,i};
        if(pq.size()<k){
            pq.push(curr);
            continue;
        }
        pq.push(curr);
        pq.pop();
    }
        vector<vector<int>> res;
        while(!pq.empty()){
            int idx=pq.top().second;
            res.push_back(points[idx]);
            pq.pop();
        }
        return res;
    }
};