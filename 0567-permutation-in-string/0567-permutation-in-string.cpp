class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        unordered_map<char,int> f1;
        int low=0,high=0;
        if(n1>n2) return false;
        for(int i=0;i<n1;i++){
            f1[s1[i]]++;
        }
        while(high<n2){
            f1[s2[high]]--;
            if(f1[s2[high]]==0) f1.erase(s2[high]);
            if(high-low+1==n1){
                if(f1.size()==0) return true;
                f1[s2[low]]++;
                if(f1[s2[low]]==0) f1.erase(s2[low]);
                low++;
            }
            high++;
        }
        return false;
    }
};