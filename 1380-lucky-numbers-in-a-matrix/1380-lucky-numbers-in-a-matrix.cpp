class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> res;
        int min_row=INT_MAX,max_col=-1;
        for(int i=0;i<r;i++){
            int pos=0;
            for(int j=0;j<c;j++){
                if(matrix[i][j]<min_row){
                    min_row=matrix[i][j];
                    pos=j;
                }
            }
            for(int k=0;k<r;k++){
                max_col=max(max_col,matrix[k][pos]);
            }
            if(min_row==max_col) res.push_back(min_row);
            min_row=INT_MAX;
            max_col=-1;
        }
        return res;
    }
};