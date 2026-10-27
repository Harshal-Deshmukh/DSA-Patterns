class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res(m,string(n,'#'));
        for(int i=0;i<n;i++){
            res[0][i]='.';
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==n-1){
                    res[i][j]='.';
                }
            }
        }
        return res;
    }
};