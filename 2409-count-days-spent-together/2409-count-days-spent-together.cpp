class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int year[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
        int enter_a=year[stoi(arriveAlice.substr(0,2))-1]+stoi(arriveAlice.substr(3,2));
        int enter_b=year[stoi(arriveBob.substr(0,2))-1]+stoi(arriveBob.substr(3,2));
        int enter=max(enter_a,enter_b);
        int exit_a=year[stoi(leaveAlice.substr(0,2))-1]+stoi(leaveAlice.substr(3,2));
        int exit_b=year[stoi(leaveBob.substr(0,2))-1]+stoi(leaveBob.substr(3,2));
        int exit=min(exit_a,exit_b);
        if(exit>=enter) return exit-enter+1;
        return 0;
    }
};