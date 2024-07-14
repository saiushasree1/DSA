bool rec(int i,int k,vector<int> &a){
    if(k==0) return true;
    if(i==a.size()) return false;
    if(a[i]>k) return false;
    return rec(i+1,k-a[i],a)||rec(i+1,k,a);
}

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum<k) return false;
    if(sum==k) return true;
    sort(a.begin(),a.end());
    return rec(0,k,a);
}
https://www.naukri.com/code360/problems/subset-sum_630213?leftPanelTabValue=SUBMISSION
