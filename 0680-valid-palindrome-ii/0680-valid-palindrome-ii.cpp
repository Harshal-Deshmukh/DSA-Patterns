class Solution {
public:
    bool isPal(string s,int low,int high){
        while(low<high){
            if(s[low]!=s[high]) return false;
            low++;
            high--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int low=0,high=s.size()-1;
        while(low<high){
            if(s[low]==s[high]){
                low++;
                high--;
            }
            else{
                return isPal(s,low+1,high) || isPal(s,low,high-1);
            }
        }
        return true;
    }
};