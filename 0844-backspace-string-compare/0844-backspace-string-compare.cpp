class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //using 2pointers
        string new_s="",new_t="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#') new_s+=s[i];
            else if(!new_s.empty()) new_s.pop_back();
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#') new_t+=t[i];
            else if(!new_t.empty()) new_t.pop_back();
        }
        if(new_s.size()!=new_t.size()) return false;
        for(int i=0;i<new_s.size();i++){
            if(new_s[i]!=new_t[i]) return false;
        }
        return true;
    }
};