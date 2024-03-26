class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
    
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        if(q1.empty()){
            return -1;
        }
        else{
            int x=q1.front();
            q1.pop();
            return x;
        }
    }
    
    int top() {
        if(!q1.empty()){
            return q1.front();
        }
        else return -1;
    }
    
    bool empty() {
        return q1.empty();
    }
};
