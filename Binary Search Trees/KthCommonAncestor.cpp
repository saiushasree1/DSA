class Solution
{
    public:
    
    /*You are required to complete below function */
    
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {   vector<int> X,Y;
        Node*temp1=root;
        Node *temp2=root;
        while(temp1!=NULL){
            if(temp1->data==x){
               X.push_back(temp1->data);
                
               break;
            }
            else if(temp1->data>x){
                X.push_back(temp1->data);
                temp1=temp1->left;
            }
            else{
                X.push_back(temp1->data);
                temp1=temp1->right;
            }
        }
         while(temp2!=NULL){
            
            
            
            if(temp2->data==y){
               Y.push_back(temp2->data);
               break;
            }
            else if(temp2->data>y){
                Y.push_back(temp2->data);
                temp2=temp2->left;
            }
            else{
                Y.push_back(temp2->data);
                temp2=temp2->right;
            }
        }
        int index=-1;
        int i;
        int mini= min(X.size(),Y.size());
        
        for(i=0;i<mini;i++){
            
            if(X[i]!=Y[i]){
                index=i;
                if(index-k<0) return -1;
                return X[index-k];
                
            }
            
        }
        if((mini-k)<0) return -1;
        return Y[mini-k];
        // your code goes here
    }
};
