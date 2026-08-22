class MinStack {
public:
    stack<long long> st;
    long long mini;
    long long x;
    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int value) {
        if(st.empty()){
            mini=value;
            st.push(value);
        }
        else{
            if(value>mini) st.push(value);
            else{
                st.push(2LL*value-mini);
                mini=value;
            }
        }
        
    }
    
    void pop() {
        if(st.empty()) return;
        x=st.top();
        st.pop();
        if(x<mini) mini=2LL*mini-x;
        
    }
    
    int top() {
        if(st.empty()) return -1;
        x=st.top();
        
        if(mini<x) return x;
        return mini;
         
    }
    
    int getMin() {
        return mini;
        
    }
};

