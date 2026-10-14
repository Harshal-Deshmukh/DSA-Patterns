class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int> vowel;
        unordered_map<int,int> cons;
        int max_vol=0,max_cons=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowel[s[i]]++;
            }
            else cons[s[i]]++;
        }

        for(auto i:vowel){
            max_vol=max(max_vol,i.second);
        }

        for(auto i:cons){
            max_cons=max(max_cons,i.second);
        }
        return max_vol+max_cons;
        
    }
};