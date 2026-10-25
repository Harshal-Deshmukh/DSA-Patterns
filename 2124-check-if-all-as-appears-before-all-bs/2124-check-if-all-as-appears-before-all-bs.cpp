class Solution {
public:
    bool checkString(string s) {
        int flag=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                if(flag==2) return false;
                flag=1;
                
            }
            else if(s[i]=='b'){
                flag=2;
            }
        }
        return true;
    }
};