class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j+1]==' ' && j+1<s.size()){
                reverse(s.begin()+i,s.begin()+j+1);
                i=j+2;
            }
            else if(j==s.size()-1){
                reverse(s.begin()+i,s.begin()+j+1);
            }
            
        }
        return s;
    }
};