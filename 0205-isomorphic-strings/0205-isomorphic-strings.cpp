class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> s_map;
        unordered_map<char,int> t_map;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if(s_map.find(s[i])!=s_map.end()){
                char ch=s_map[s[i]];
                if(ch!=t[i]) return false;
            }
            s_map[s[i]]=t[i];

            if(t_map.find(t[i])!=t_map.end()){
                char ch=t_map[t[i]];
                if(ch!=s[i]) return false;
            }
            t_map[t[i]]=s[i];
            
        }

        return true;
    }
};