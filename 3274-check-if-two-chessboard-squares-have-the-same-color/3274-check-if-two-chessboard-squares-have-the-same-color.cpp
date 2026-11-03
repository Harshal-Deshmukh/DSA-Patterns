class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        //a,c,e,g odd: black even: white
        //b,d,f,h even: black odd: white
        bool black1=false,black2=false;
        if((coordinate1[0]=='a' || coordinate1[0]=='c' || coordinate1[0]=='e' || coordinate1[0]=='g')
            && (coordinate1[1]-'0')%2==1 
        ){
            black1=true;
        }
        else if((coordinate1[0]=='b' || coordinate1[0]=='d' || coordinate1[0]=='f' || coordinate1[0]=='h')
            && (coordinate1[1]-'0')%2==0 
        ){
            black1=true;
        }

        if((coordinate2[0]=='a' || coordinate2[0]=='c' || coordinate2[0]=='e' || coordinate2[0]=='g')
            && (coordinate2[1]-'0')%2==1 
        ){
            black2=true;
        }
        if((coordinate2[0]=='b' || coordinate2[0]=='d' || coordinate2[0]=='f' || coordinate2[0]=='h')
            && (coordinate2[1]-'0')%2==0 
        ){
            black2=true;
        }

        if(black1==false && black2==false) return true;
        else if(black1==false || black2==false) return false;
        return true;

    }
};