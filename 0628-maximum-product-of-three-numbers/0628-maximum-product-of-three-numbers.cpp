class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int largest=INT_MIN, largest2=INT_MIN, largest3=INT_MIN;
        int smallest=INT_MAX,smallest2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            //LARGEST
            if(nums[i]>=largest){
                largest3=largest2;
                largest2=largest;
                largest=nums[i];
            }
            else if(nums[i]>=largest2 && nums[i]!=largest){
                largest3=largest2;
                largest2=nums[i];
            }
            else if(nums[i]>=largest3 && nums[i]!=largest2){
                largest3=nums[i];
            }

            //SMALLEST
            if(nums[i]<=smallest){
                smallest2=smallest;
                smallest=nums[i];
            }
            else if(nums[i]<=smallest2 && nums[i]!=smallest){
                smallest2=nums[i];
            }
        }
        return max(largest*largest2*largest3,largest*smallest*smallest2);
    }
};