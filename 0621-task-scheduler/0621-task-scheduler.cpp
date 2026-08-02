class Solution {
public:
    struct cmp{
        bool operator()(pair<int,char> &a, pair<int,char> &b){
            return a.first<b.first;
        }
    };
    int leastInterval(vector<char>& tasks, int n) {
        int num=tasks.size();
        int seat=0;
        unordered_map<char,int> freq;
        unordered_map<char,int> free;
        for(int i=0;i<num;i++){
            freq[tasks[i]]++;
            free[tasks[i]]=0;
        }
        priority_queue<pair<int,char>,vector<pair<int,char>>,cmp> pq;

        for(auto i: freq){
            pq.push({i.second,i.first});
        }

        while(!pq.empty()){
            vector<pair<int,char>> kona;
            while(!pq.empty()){
                pair<int,char>p=pq.top();
                pq.pop();
                int fr=p.first;
                char child=p.second;

                if(free[child]<=seat){
                    if(p.first>1){
                        pq.push({p.first-1,p.second});
                        free[p.second]=seat+n+1;
                    }
                    break;
                    }
                else{
                    kona.push_back(p);
                    }   
            }
            for(int i=0;i<kona.size();i++){
                pq.push(kona[i]);
            }
            seat++;
        }
        return seat;
    }
};