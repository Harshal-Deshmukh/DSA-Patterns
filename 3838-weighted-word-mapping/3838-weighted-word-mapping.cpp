class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(int i=0;i<words.size();i++){
            string word=words[i];
            int sum=0;
            for(int j=0;j<word.size();j++){
                int pos=word[j]-'a';
                sum+=weights[pos];
            }
                int ans=sum%26;
                char ch='z'-ans;
                res.push_back(ch);
        }
        return res;
    }
};