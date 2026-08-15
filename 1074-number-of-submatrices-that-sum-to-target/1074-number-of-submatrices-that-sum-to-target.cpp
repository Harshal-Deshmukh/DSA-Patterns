class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        //cum_sum of matrix horizontally
        for(int row=0;row<rows;row++){
            for(int col=1;col<cols;col++){
                matrix[row][col]+=matrix[row][col-1];
            }
        }

        int result=0;
        for(int col=0; col<cols;col++){

            for(int j=col;j<cols;j++){
                unordered_map<int,int> mp;
                mp[0]=1;
                int cumSum=0;

                for(int row=0;row<rows;row++){
                    cumSum+=matrix[row][j]-(col>0 ? matrix[row][col-1] : 0);

                    if(mp.find(cumSum-target) != mp.end()){
                        result+= mp[cumSum-target];
                    }

                    mp[cumSum]++;
                }

            }
        }
        return result;
    }
};