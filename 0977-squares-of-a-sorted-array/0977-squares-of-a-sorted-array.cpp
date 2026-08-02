class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];
            }
               return pos;  
            
        }
        if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
            }
               reverse(neg.begin(),neg.end());
               return neg;  
            
        }
        reverse(neg.begin(),neg.end());
        int i=0,j=0,n=0;
        while(i<neg.size() && j<pos.size()){
            if(neg[i]*neg[i]<pos[j]*pos[j]){
                nums[n]=neg[i]*neg[i];
                i++;
                
            }
            else{
                nums[n]=pos[j]*pos[j];
                j++;
            }   
            n++;     
        }
        while(i<neg.size()){
            nums[n]=neg[i]*neg[i];
            i++;
            n++;
        }
        while(j<pos.size()){
            nums[n]=pos[j]*pos[j];
            j++;
            n++;
        }
        return nums;
    }
};