class MyQueue {
    stack<int> input,output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }    
            int x= output.top();
            output.pop();
            return x;
        
    }
    
    int peek() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }    
            return output.top();
    }
    
    bool empty() {
        if(input.empty() && output.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
