class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(mp.find(grid[i][j])!=mp.end()) res.push_back(grid[i][j]);
                mp[grid[i][j]]++;
            }
        }
        int grid_size=grid.size()*grid[0].size();
        for(int i=1;i<=grid_size;i++){
            if(mp.find(i)==mp.end()) res.push_back(i);
        }
        return res;
    }
};