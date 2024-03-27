Node* createTree(vector<int>&arr){
    // Write your code here.
    Node* head=new Node(arr[0]);
    head->left=new Node(arr[1]);
    head->right=new Node(arr[2]);
    head->left->left=new Node(arr[3]);
    head->left->right=new Node(arr[4]);
    head->right->left=new Node(arr[5]);
    head->right->right=new Node(arr[6]);
    return head;
}