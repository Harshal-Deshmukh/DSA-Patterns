class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> fs;
        unordered_map<string,int> sec;
        vector <string> res;
        string word="";
        for(int i=0;i<s1.size();i++){           
            if(s1[i]!=' '){
                word.push_back(s1[i]);
                }
            else{
                fs[word]++;
                word="";
            } 
        }
        if(!word.empty()){
            fs[word]++;
        }

        word="";

        for(int i=0;i<s2.size();i++){           
            if(s2[i]!=' '){
                word.push_back(s2[i]);
                }
            else{
                sec[word]++;
                word="";
            } 
        }
        if(!word.empty()){
            sec[word]++;
        }

        for(auto i:fs){
            if(i.second==1){
                if(sec.find(i.first)==sec.end()){
                    res.push_back(i.first);
                }
            }
        }

        for(auto i:sec){
            if(i.second==1){
                if(fs.find(i.first)==fs.end()){
                    res.push_back(i.first);
                }
            }
        }
        return res;
    }
};