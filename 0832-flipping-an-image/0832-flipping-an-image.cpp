class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int m=0,n=image[0].size()-1;
            while(m<n){
                image[i][m]=1-image[i][m];
                image[i][n]=1-image[i][n];
                swap(image[i][m],image[i][n]);
                m++;
                n--;
            }
            if(m==n) image[i][m]=1-image[i][m];
        }
        return image;
    }
};