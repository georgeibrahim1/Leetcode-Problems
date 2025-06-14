class MyQueue {
private:
    stack<int> s;
public:
    MyQueue() {
    }
    
    void push(int x) {
        if(s.empty()) 
            s.push(x);
        else {
            stack<int> n;
            while(!s.empty()) {
                n.push(s.top());
                s.pop();
            }
            s.push(x);
            while(!n.empty()) {
                s.push(n.top());
                n.pop();
            }
        }
    }
    
    int pop() {
        int x = s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */