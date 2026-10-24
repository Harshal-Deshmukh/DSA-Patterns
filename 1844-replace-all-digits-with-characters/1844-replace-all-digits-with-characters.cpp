class Solution {
public:
    string replaceDigits(string s) {
        string ch="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int prev=ch.find(s[i-1]);
                int x=s[i]-'0';
                s[i]=ch[x+prev];
            }
        }
        return s;
    }
};