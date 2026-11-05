class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int sum=0,sum1=0,sum2=0;
        int maxi=max({firstWord.size(),secondWord.size(),targetWord.size()});
        int i=0;
        while(i<=maxi){
            if(i<firstWord.size()) sum1=sum1*10+firstWord[i]-'a';
            if(i<secondWord.size()) sum2=sum2*10+secondWord[i]-'a';
            if(i<targetWord.size()) sum=sum*10+targetWord[i]-'a';
            i++;
        }
        return (sum1+sum2)==sum;
    }
};