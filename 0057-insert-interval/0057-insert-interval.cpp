class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool inserted=false;
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(inserted==false && newInterval[0]<intervals[i][0]){
                res.push_back(newInterval);
                inserted = true;
            }
            res.push_back(intervals[i]);

        }
        if(inserted==false) {
            res.push_back(newInterval);
        }

        vector<vector<int>> ans;
        int start1 = res[0][0];
        int end1 = res[0][1];
        for(int i=1;i<res.size();i++){
            int start2 = res[i][0];
            int end2 = res[i][1];
            if(start2<=end1){
                end1 = max(end1,end2);
                continue;
            }
            ans.push_back({start1,end1});
            start1 = start2;
            end1 = end2;
        }
        ans.push_back({start1,end1});
        return ans;
    }
};