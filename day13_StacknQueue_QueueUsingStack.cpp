class MyQueue {
public:
    stack<int>inp;
    stack<int>op;
    MyQueue() {
        
    }
    
    void push(int x) {
        inp.push(x);
    }
    
    int pop() {
        if(op.empty()){
            while(inp.empty()==false){
                op.push(inp.top());
                inp.pop();
            }
        }
        int curr = op.top();
        op.pop();
        return curr;
    }
    
    int peek() {
        if(op.empty()){
            while(inp.empty()==false){
                op.push(inp.top());
                inp.pop();
            }
        }

        return op.top();
    }
    
    bool empty() {
        return op.empty()&&inp.empty();
    }
};
