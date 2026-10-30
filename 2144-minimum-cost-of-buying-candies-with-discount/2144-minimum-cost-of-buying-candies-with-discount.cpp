class Solution {
public:
    int minimumCost(vector<int>& cost) {
        long long total=0;
        sort(cost.begin(),cost.end());
        
        for(int i=cost.size()-1;i>=0;i-=3){
            if(i==0) total+=cost[0];
            else total+=cost[i]+cost[i-1];

        }
        return total;
    }
};