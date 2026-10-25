class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev=-1,start;
        for(int i=0;i<s.size();i++){
            int cnt=0;
            if(isdigit(s[i])){
                start=i;
                while(i<s.size() && isdigit(s[i])){
                    i++;
                    cnt++;
                }
                int curr=stoi(s.substr(start,cnt));
                if(prev==-1){
                    prev=curr;
                    continue;
                } 
                if(prev>=curr) return false;
                prev=curr;  
            }}
        return true;  
    }
};