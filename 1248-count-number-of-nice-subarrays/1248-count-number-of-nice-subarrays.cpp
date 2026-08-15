class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0]=1;
        int odd_count=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 != 0) odd_count++;
            int n=odd_count-k;// pehle_ye_count_aya_tha
            int freq=map[n];
            res+=freq;
            map[odd_count]++;
        }
        return res;
    }
};


//SLIDING WINDOW APPROACH
/*
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int low=0,high=0;
        int count=0,odd_count=0,ans=0;
        int n=nums.size();
        for(high=0;high<n;high++){
            if(nums[high]%2!=0) odd_count++;
            if(odd_count==k){
                count=0;
                while(odd_count==k){
                    count++;
                    if(nums[low]%2!=0)
                        odd_count--;
                    
                    low++;
                } 
                ans+=count;   
            }
        }
        return ans;
    }
};*/