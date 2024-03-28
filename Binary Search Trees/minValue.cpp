int minVal(Node* root){
	// Write your code here.
	if(!root){
		return -1;
	}
        if (root->left ) {
			return minVal(root->left);
        }
		else{
			return root->data;
		}
}