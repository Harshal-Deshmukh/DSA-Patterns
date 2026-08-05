class Solution {
public:
    unordered_map<char,string> f;
    void fun(string digits,int n, int idx, string diary, vector<string> &res){
        if(idx==n){//last step
            res.push_back(diary);
            return;
        }
        string choice=f[digits[idx]];
        for(int i=0;i<choice.size();i++){
            diary.push_back(choice[i]);
            fun(digits,n,idx+1,diary,res);
            diary.pop_back();
        }
        return;
    }

    vector<string> letterCombinations(string digits) {
        
        f['2']="abc";
        f['3']="def";
        f['4']="ghi";
        f['5']="jkl";
        f['6']="mno";
        f['7']="pqrs";
        f['8']="tuv";
        f['9']="wxyz";
        int idx=0;
        string diary ="";
        vector<string> res;
        int n=digits.size();
        fun(digits,n,idx,diary,res);
        return res;
    }
};