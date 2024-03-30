class Solution{   
public:
    int rec(int n,int s,vector<int> arr,vector<vector<int>> &si){
        if(s==0) return 1;
        if(n==-1) return 0;
        if(si[n][s]!=-1){
            return si[n][s];
        }
        if(arr[n]<=s){
            
            return si[n][s]=max(rec(n-1,s-arr[n],arr,si),rec(n-1,s,arr,si));
        }
        else{
            return si[n][s]=rec(n-1,s,arr,si);
        }
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<int>> s(n,vector<int>(sum+1,-1));
        return rec(n-1,sum,arr,s);
    }
};
