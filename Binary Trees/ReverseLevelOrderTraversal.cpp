vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> v;
    stack<int> a;
    queue<Node*> s;
    s.push(root);
    while(!s.empty()){
        if(s.front()->right){
            s.push(s.front()->right);
        }
        if(s.front()->left){
            s.push(s.front()->left);
        }
        a.push(s.front()->data);
        s.pop();
    }
    while(!a.empty()){
        v.push_back(a.top());
        a.pop();
    }
    return v;
}
https://www.geeksforgeeks.org/problems/reverse-level-order-traversal/1
