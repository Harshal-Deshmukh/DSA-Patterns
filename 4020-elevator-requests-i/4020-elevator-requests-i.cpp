class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int curr=0,time=0;
        for(int i=0;i<requests.size();i++){
            if(curr==requests[i]) continue;
            else if(requests[i]> n) continue;
            else{
                time+=abs(requests[i]-curr);
                curr=requests[i];
            }
        }
        return time;
    }
};