class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int carry=0;
        int i=num1.size()-1,j=num2.size()-1;
        while(i>=0 && j>=0){
            int sum=num1[i]+num2[j]-('0'*2)+carry;
            res.push_back(sum%10+'0');
            carry=sum/10;
            i--;
            j--;
        }
        while(i>=0){
            int sum=num1[i]-'0'+carry;
            res.push_back(sum%10+'0');
            carry=sum/10;
            i--;
        }
        while(j>=0){
            int sum=num2[j]-'0'+carry;
            res.push_back(sum%10+'0');
            carry=sum/10;
            j--;
        }
        if (carry) res.push_back(carry + '0');
        reverse(res.begin(),res.end());
        return res;
    }
};