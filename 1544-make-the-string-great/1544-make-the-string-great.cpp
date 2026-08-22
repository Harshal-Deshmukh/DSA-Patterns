#include<cctype>
class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for (int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            } 
            if(tolower(st.top())==tolower(s[i]) &&
                isupper(st.top())!=isupper(s[i])){
                    st.pop();
                }
            else st.push(s[i]);
        }
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};