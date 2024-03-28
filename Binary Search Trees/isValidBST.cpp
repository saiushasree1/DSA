bool isValidBST(vector<int> &o){
    // Write your code here.
    for(int i=1;i<o.size();i++){
        if(o[i]<=o[i-1]){
            return false;
        }
    }
    return true;
}
