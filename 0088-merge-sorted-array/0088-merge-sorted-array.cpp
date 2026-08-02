class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last=m+n-1;
        int i=m-1,j=n-1;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>=nums2[j]){
                nums1[last]=nums1[i];
                i--;
            }
            else{
                nums1[last]=nums2[j];
                j--;
            }
            last--;
        }
        while(j<nums2.size()){
            nums1[last]=nums2[j];
            j--;
            last--;
        }
         
    }
};