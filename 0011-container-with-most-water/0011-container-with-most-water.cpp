class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int left=0;
        int right=n-1;
        int max_area=-1;
        while(left<right){
            int h=min(height[left],height[right]);
            int b=right-left;
            max_area=max(max_area,b*h);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return max_area;    
    }
};