class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> res;
        for(int i=0;i<asteroids.size();i++){
            if(st.empty()){
                st.push(asteroids[i]);
                continue;
            }

            if(st.top()>0 && asteroids[i]<0){
                int temp=-asteroids[i];

                while(!st.empty() && st.top()<temp && st.top()>0){
                        st.pop();
                }
                if(st.empty()) st.push(asteroids[i]);

                else if(st.top()==temp) st.pop();

                else if(st.top()<0) st.push(asteroids[i]);
                
            }

            else st.push(asteroids[i]);

        }

        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(),res.end());
        return res;
    }
};