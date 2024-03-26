class MinStack {
    vector<vector<int>> v;
    int size;
    int minimum;
public:
    MinStack() {
        minimum=INT_MAX;
        size=0;
    }
    
    void push(int val) {
        minimum=min(minimum,val);
        v.push_back({val,minimum});
        size++;
        return;
    }
    
    void pop() {
        if(size){
            v.pop_back();
            size--;
            if(size)
            minimum=v[size-1][1];
            else minimum=INT_MAX;
            
        }
        return;
    }
    
    int top() {
        if(size){
            return v[size-1][0];
        }
        else return -1;
    }
    int getMin() {
        if(size){
            return v[size-1][1];
        }
        else return -1;
    }
    
};
