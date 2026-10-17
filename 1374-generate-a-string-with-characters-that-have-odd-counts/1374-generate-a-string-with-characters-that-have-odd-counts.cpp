class Solution {
public:
    string generateTheString(int n) {
        string res;
        if(n%2==0){
            res=string(n-1,'p');
            res.push_back('q');
        }
        else{
            res=string(n,'p');
        }
        return res;
    }
};