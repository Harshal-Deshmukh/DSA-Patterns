class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(char c: s){
            if(isalnum(c)) res+= tolower(c);
        }
        s=res;
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
                continue;
            }
            return false;
        }
        return true;
    }
};