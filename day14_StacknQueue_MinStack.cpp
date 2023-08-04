class MinStack {
public:
    MinStack() {
    }
    stack<long>st;
    long mini;
    
    void push(int val) {
        int value = val;
        if(st.empty()){
            st.push(value);
            mini = value;
        }
        else{
            if(value < mini){
                st.push((long)2*value - mini);
                mini = value;
            }
            else{
                st.push(value);
            }
        }
    }
    
    void pop() {
        if(st.empty()){
            return;
        }
        else{
            long value = st.top();
            st.pop();
            if(value < mini){
                mini = (2*mini - value);
            }
        }
        
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }
        else{
        long value = st.top();
        if(value < mini){
            return mini;
        }
        else{
            return value;
        }
        }
    }
    
    int getMin() {
        if(st.empty()){
            return -1;
        }
        else{
            return mini;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
