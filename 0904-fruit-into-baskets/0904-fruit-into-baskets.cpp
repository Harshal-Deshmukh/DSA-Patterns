class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       unordered_map<int,int> f;
       int low=0,high=0,maxLen=-1;
       for(high=0;high<fruits.size();high++){
        f[fruits[high]]++;
        while(f.size()>2){
            f[fruits[low]]--;
            if(f[fruits[low]]==0){
                f.erase(fruits[low]);
            }
            
            low++;
        }
            maxLen=max(maxLen,high-low+1);
       } 
       return maxLen;
    }
};